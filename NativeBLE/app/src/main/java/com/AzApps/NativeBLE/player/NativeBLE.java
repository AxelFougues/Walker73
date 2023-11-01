package com.AzApps.NativeBLE.player;

import android.Manifest;
import android.annotation.SuppressLint;
import android.annotation.TargetApi;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothGatt;
import android.bluetooth.BluetoothGattCallback;
import android.bluetooth.BluetoothGattCharacteristic;
import android.bluetooth.BluetoothGattDescriptor;
import android.bluetooth.BluetoothGattService;
import android.bluetooth.BluetoothManager;
import android.bluetooth.BluetoothProfile;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanResult;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import com.google.gson.Gson;
import com.unity3d.player.UnityPlayer;
import com.unity3d.player.UnityPlayerActivity;
import java.util.ArrayList;
import java.util.Hashtable;
import java.util.UUID;

public class NativeBLE extends UnityPlayerActivity {
    //Seems unused, need to check before removing it
    static final String TAG = "Unity";
    static int BLUETOOTH_SCAN_REQUEST_CODE = 0;
    static int BLUETOOTH_CONNECT_REQUEST_CODE = 1;
    static int ENABLE_BT_REQUEST_CODE = 2;
    //True upon initialization, not strictly necessary. Should consider removing if initialization can't fail
    boolean available = false;

    private BluetoothAdapter bluetoothAdapter;
    private BluetoothLeScanner bluetoothLeScanner;
    private boolean scanning;
    private final Handler handler = new Handler();

    private static final long SCAN_PERIOD = 5000;

    Hashtable<String, BluetoothDevice> availableDevices = new Hashtable<>();
    ConnectedDevice connectedDevice = null;
    BluetoothGatt bluetoothGatt;

    //ACTIVITY LIFECYCLE
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        initialize();
    }
/*
//These don't seem necessary

    public void onPause() {
        super.onPause();
        Toast.makeText(this, "Pause", Toast.LENGTH_SHORT).show();
    }

    public void onResume() {
        super.onResume();
        Toast.makeText(this, "Resume", Toast.LENGTH_SHORT).show();
    }
*/

    void initialize() {
        if (checkSelfPermission(Manifest.permission.BLUETOOTH_SCAN) != PackageManager.PERMISSION_GRANTED) {
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Requesting permission: BLUETOOTH_SCAN");
            requestPermissions(new String[]{Manifest.permission.BLUETOOTH_SCAN}, BLUETOOTH_SCAN_REQUEST_CODE);
            return;
        }
        if (checkSelfPermission(Manifest.permission.BLUETOOTH_CONNECT) != PackageManager.PERMISSION_GRANTED) {
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Requesting permission: BLUETOOTH_SCAN");
            requestPermissions(new String[]{Manifest.permission.BLUETOOTH_CONNECT}, BLUETOOTH_CONNECT_REQUEST_CODE);
            return;
        }

        BluetoothManager manager = (BluetoothManager) getSystemService(Context.BLUETOOTH_SERVICE);
        if (manager == null) {
            sendToUnity(AndroidMessagePrefix.DEBUG_ERROR, "Failed to get Bluetooth manager");
            return;
        } else {
            bluetoothAdapter = manager.getAdapter();
            available = true;
        }
        bluetoothLeScanner = bluetoothAdapter.getBluetoothLeScanner();

        if (!bluetoothAdapter.isEnabled() || bluetoothLeScanner == null) {
            Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            startActivityForResult(enableBtIntent, ENABLE_BT_REQUEST_CODE);
        }
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        if(!available) initialize();
    }

    @Override
    public  void onActivityResult(int requestCode, int resultCode, Intent data){
        if(!available) initialize();
    }

    //BLE

    @SuppressLint("MissingPermission")
    public boolean scanLeDevice() {
        if (!scanning) {
            // Stops scanning after a predefined scan period.
            handler.postDelayed(new Runnable() {
                @SuppressLint("MissingPermission")
                @Override
                public void run() {
                    scanning = false;
                    sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Stopped scanning");
                    bluetoothLeScanner.stopScan(leScanCallback);
                }
            }, SCAN_PERIOD);

            scanning = true;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Scanning");
            availableDevices.clear();
            bluetoothLeScanner.startScan(leScanCallback);
        }
        return scanning;
    }


    @SuppressLint("MissingPermission")
    public boolean connectLeDevice(String address){
        sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Connecting");
        try {
            final BluetoothDevice device = bluetoothAdapter.getRemoteDevice(address);
            bluetoothGatt = device.connectGatt(this, false, leGattCallback);
            return true;
        } catch (IllegalArgumentException exception) {
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Connecting failed");
            return false;
        }
    }

    @SuppressLint("MissingPermission")
    public boolean exploreLeServices(){
        if(bluetoothGatt == null ) return false;
        bluetoothGatt.discoverServices();
        return true;
    }

    @SuppressLint("MissingPermission")
    public boolean readCharacteristic(String service, String characteristic){
        if(bluetoothGatt == null ) return false;

        UUID serviceUUID = UUID.fromString(service);
        UUID characteristicUUID = UUID.fromString(characteristic);

        BluetoothGattService serviceObj = bluetoothGatt.getService(serviceUUID);

        BluetoothGattCharacteristic charObj = serviceObj.getCharacteristic(characteristicUUID);

        sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Reading characteristic " + charObj.getUuid() + " from " + serviceObj.getUuid());
        bluetoothGatt.readCharacteristic(charObj);
        return true;
    }

    @SuppressLint("MissingPermission")
    public boolean writeCharacteristic(String service, String characteristic, byte[] data){
        if(bluetoothGatt == null ) return false;

        UUID serviceUUID = UUID.fromString(service);
        UUID characteristicUUID = UUID.fromString(characteristic);

        BluetoothGattService serviceObj = bluetoothGatt.getService(serviceUUID);

        if(serviceObj == null){
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Service " + serviceUUID.toString() + " is not available.");
            return false;
        }
        BluetoothGattCharacteristic charObj = serviceObj.getCharacteristic(characteristicUUID);
        if(charObj == null){
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Characteristic " + characteristicUUID.toString() + " is not available in service "+ serviceUUID.toString());
            return false;
        }
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "SDK33+ Writing characteristic " + charObj.getUuid() + " from " + serviceObj.getUuid());
            bluetoothGatt.writeCharacteristic(charObj, data, BluetoothGattCharacteristic.WRITE_TYPE_DEFAULT);
        }else{
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "SDK32- Writing characteristic " + charObj.getUuid() + " from " + serviceObj.getUuid());
            charObj.setWriteType(BluetoothGattCharacteristic.WRITE_TYPE_DEFAULT);
            charObj.setValue(data);
            bluetoothGatt.writeCharacteristic(charObj);
        }
        return true;
    }

    @SuppressLint("MissingPermission")
    public boolean disconnectLeDevice(){
        if(bluetoothGatt == null ) return false;
        sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Disconnecting");
        bluetoothGatt.close();
        return true;
    }


    //CALLBACKS
    private final ScanCallback leScanCallback = new ScanCallback() {
        @Override
        public void onScanResult(int callbackType, ScanResult result) {
            BtleDevice btleDevice = new BtleDevice(result.getDevice());
            if(!availableDevices.containsKey(btleDevice.address)){
                availableDevices.put(btleDevice.address, result.getDevice());
                UnityPlayer.UnitySendMessage("NativeBLE", "scanResult", new Gson().toJson(btleDevice));
            }
        }
    };


    private final BluetoothGattCallback leGattCallback = new BluetoothGattCallback() {

        @SuppressLint("MissingPermission")
        @Override
        public void onConnectionStateChange(BluetoothGatt gatt, int status, int newState) {
            bluetoothGatt = gatt;
            if (newState == BluetoothProfile.STATE_CONNECTED) {
                sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Connected");
                connectedDevice = new ConnectedDevice(gatt, newState);
                BleResponse response = new BleResponse();
                response.device = connectedDevice;
                response.status = status;
                UnityPlayer.UnitySendMessage("NativeBLE", "connected", new Gson().toJson(response) );

            } else if (newState == BluetoothProfile.STATE_DISCONNECTED) {
                sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Disconnected");
                bluetoothGatt = null;
                connectedDevice = null;
                UnityPlayer.UnitySendMessage("NativeBLE", "disconnected", String.valueOf(status));
            }

        }
        @Override
        public void onCharacteristicRead (BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, byte[] value, int status){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Characteristic Read");
            connectedDevice = new ConnectedDevice(gatt);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            response.characteristic = characteristic.getUuid().toString();
            response.status = status;
            response.data = value;
            UnityPlayer.UnitySendMessage("NativeBLE", "characteristicRead", new Gson().toJson(response));
        }
        @Override
        public void onCharacteristicWrite(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, int status){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Characteristic Written");
            connectedDevice = new ConnectedDevice(gatt, status);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            response.characteristic = characteristic.getUuid().toString();
            response.status = status;
            UnityPlayer.UnitySendMessage("NativeBLE", "characteristicWrite", new Gson().toJson(response) );
        }
        @Override
        public void onDescriptorWrite(BluetoothGatt gatt, BluetoothGattDescriptor descriptor, int status){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Descriptor Written");
            connectedDevice = new ConnectedDevice(gatt, status);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            response.status = status;
            UnityPlayer.UnitySendMessage("NativeBLE", "descriptorWrite", new Gson().toJson(response) );
        }
        @Override
        public void onMtuChanged(BluetoothGatt gatt, int mtu, int status){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Mtu changed");
            connectedDevice = new ConnectedDevice(gatt, status);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            response.status = status;
            UnityPlayer.UnitySendMessage("NativeBLE", "mtuChanged", new Gson().toJson(response) );
        }
        @Override
        public void onPhyRead(BluetoothGatt gatt, int txPhy, int rxPhy, int status){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Phy read");
            connectedDevice = new ConnectedDevice(gatt, status);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            response.status = status;
            UnityPlayer.UnitySendMessage("NativeBLE", "phyRead", new Gson().toJson(response) );
        }
        @Override
        public void onPhyUpdate(BluetoothGatt gatt, int txPhy, int rxPhy, int status){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Phy updated");
            connectedDevice = new ConnectedDevice(gatt, status);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            response.status = status;
            UnityPlayer.UnitySendMessage("NativeBLE", "phyUpdate", new Gson().toJson(response) );
        }
        @Override
        public void onReadRemoteRssi(BluetoothGatt gatt, int rssi, int status){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Rssi read");
            connectedDevice = new ConnectedDevice(gatt, status);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            response.status = status;
            UnityPlayer.UnitySendMessage("NativeBLE", "readRemoteRssi", new Gson().toJson(response) );
        }
        @Override
        public void onReliableWriteCompleted(BluetoothGatt gatt, int status){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Reliable read completed");
            connectedDevice = new ConnectedDevice(gatt, status);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            response.status = status;
            UnityPlayer.UnitySendMessage("NativeBLE", "reliableWriteCompleted", new Gson().toJson(response) );
        }
        @Override
        public void onServiceChanged(BluetoothGatt gatt){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Service changed");
            connectedDevice = new ConnectedDevice(gatt);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            UnityPlayer.UnitySendMessage("NativeBLE", "serviceChanged", new Gson().toJson(response) );
        }
        @Override
        public void onServicesDiscovered(BluetoothGatt gatt, int status){
            bluetoothGatt = gatt;
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Services discovered");
            connectedDevice = new ConnectedDevice(gatt, status);
            BleResponse response = new BleResponse();
            response.device = connectedDevice;
            response.status = status;
            UnityPlayer.UnitySendMessage("NativeBLE", "servicesDiscovered", new Gson().toJson(response) );
        }
    };


    //UNITY CALLED METHODS

    public boolean androidAvailable() {
        sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Native lib available: " + available);
        return available;
    }

    public static void sendToUnity(AndroidMessagePrefix prefix, String msg) {
        UnityPlayer.UnitySendMessage("NativeBLE", "messageFromAndroid", prefix.toString() + "#" + msg);
    }

    public enum AndroidMessagePrefix {
        DEBUG_LOG, DEBUG_ERROR
    }

    public class BtleDevice {
        public String address;
        public String name;

        @SuppressLint("MissingPermission")
        public BtleDevice(BluetoothDevice device) {
            this.address = device.getAddress();
            this.name = device.getName();
        }
    }

    public class ConnectedDevice {
        public BtleDevice deviceInfo;
        public int state = 0;
        public ArrayList<String> services;
        public ArrayList<String> characteristics;
        public int mtu = 0;
        public int txPhy = 0;
        public int rxPhy = 0;
        public int rssi = 0;

        public ConnectedDevice(BluetoothGatt gatt, int state) {
            deviceInfo = new BtleDevice(gatt.getDevice());
            this.state = state;
            services = new ArrayList<>();
            characteristics = new ArrayList<>();

            for (BluetoothGattService service: gatt.getServices()) {
                services.add(service.getUuid().toString());

                String serviceCharacteristics = "";
                for (BluetoothGattCharacteristic characteristic: service.getCharacteristics()) {
                    serviceCharacteristics += characteristic.getUuid().toString() + "\n";
                }
                characteristics.add(serviceCharacteristics);
            }
        }

        public ConnectedDevice(BluetoothGatt gatt) {
            deviceInfo = new BtleDevice(gatt.getDevice());
            services = new ArrayList<>();
            characteristics = new ArrayList<>();

            for (BluetoothGattService service: gatt.getServices()) {
                services.add(service.getUuid().toString());

                String serviceCharacteristics = "";
                for (BluetoothGattCharacteristic characteristic: service.getCharacteristics()) {
                    serviceCharacteristics += characteristic.getUuid().toString() + "\n";
                }
                characteristics.add(serviceCharacteristics);
            }
        }
    }

    public class BleResponse{
        public ConnectedDevice device;
        public int status = -1;
        public byte[] data = null;
        public String characteristic = null;
        public String service = null;
    }

}




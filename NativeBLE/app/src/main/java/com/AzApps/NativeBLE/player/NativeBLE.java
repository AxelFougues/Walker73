package com.AzApps.NativeBLE.player;

import android.Manifest;
import android.annotation.SuppressLint;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothGatt;
import android.bluetooth.BluetoothGattCallback;
import android.bluetooth.BluetoothGattCharacteristic;
import android.bluetooth.BluetoothGattDescriptor;
import android.bluetooth.BluetoothManager;
import android.bluetooth.BluetoothProfile;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanResult;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.os.Handler;

import com.google.gson.Gson;
import com.unity3d.player.UnityPlayer;
import com.unity3d.player.UnityPlayerActivity;

import java.util.Hashtable;

public class NativeBLE<LocalBroadcastManager> extends UnityPlayerActivity {
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
    private Handler handler = new Handler();

    private static final long SCAN_PERIOD = 3000;

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

    private ScanCallback leScanCallback = new ScanCallback() {
        @Override
        public void onScanResult(int callbackType, ScanResult result) {
            //super.onScanResult(callbackType, result);
            BtleDevice btleDevice = new BtleDevice(result.getDevice());
            if(!availableDevices.containsKey(btleDevice.address)){
                availableDevices.put(btleDevice.address, result.getDevice());
                UnityPlayer.UnitySendMessage("NativeBLE", "scanResult", new Gson().toJson(btleDevice));
            }
        }
    };

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

    private BluetoothGattCallback leGattCallback = new BluetoothGattCallback() {
        //@Override
        //public void onCharacteristicChanged(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, byte[] value){

        //}
        //@Override
        //public void onCharacteristicRead(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, byte[] value, int status){

        //}
        @Override
        public void onCharacteristicWrite(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, int status){
            UnityPlayer.UnitySendMessage("NativeBLE", "characteristicWrite", "");
        }
        @Override
        public void onConnectionStateChange(BluetoothGatt gatt, int status, int newState) {
            if (newState == BluetoothProfile.STATE_CONNECTED) {
                sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Connected");
            } else if (newState == BluetoothProfile.STATE_DISCONNECTED) {
                sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Disconnected");
            }
            UnityPlayer.UnitySendMessage("NativeBLE", "connectionStateChange", "");
        }
        //@Override
        //public void onDescriptorRead(BluetoothGatt gatt, BluetoothGattDescriptor descriptor, int status, byte[] value){

        //}
        @Override
        public void onDescriptorWrite(BluetoothGatt gatt, BluetoothGattDescriptor descriptor, int status){
            UnityPlayer.UnitySendMessage("NativeBLE", "descriptorWrite", "");
        }
        @Override
        public void onMtuChanged(BluetoothGatt gatt, int mtu, int status){
            UnityPlayer.UnitySendMessage("NativeBLE", "mtuChanged", "");
        }
        @Override
        public void onPhyRead(BluetoothGatt gatt, int txPhy, int rxPhy, int status){
            UnityPlayer.UnitySendMessage("NativeBLE", "phyRead", "");
        }
        @Override
        public void onPhyUpdate(BluetoothGatt gatt, int txPhy, int rxPhy, int status){
            UnityPlayer.UnitySendMessage("NativeBLE", "phyUpdate", "");
        }
        @Override
        public void onReadRemoteRssi(BluetoothGatt gatt, int rssi, int status){
            UnityPlayer.UnitySendMessage("NativeBLE", "readRemoteRssi", "");
        }
        @Override
        public void onReliableWriteCompleted(BluetoothGatt gatt, int status){
            UnityPlayer.UnitySendMessage("NativeBLE", "reliableWriteCompleted", "");
        }
        @Override
        public void onServiceChanged(BluetoothGatt gatt){
            UnityPlayer.UnitySendMessage("NativeBLE", "serviceChanged", "");
        }
        @Override
        public void onServicesDiscovered(BluetoothGatt gatt, int status){
            UnityPlayer.UnitySendMessage("NativeBLE", "servicesDiscovered", "");
        }
    };

    @SuppressLint("MissingPermission")
    public void disconnectLeDevice(){
        if(bluetoothGatt != null ){
            sendToUnity(AndroidMessagePrefix.DEBUG_LOG, "Disconnecting");
            bluetoothGatt.close();
        }
    }

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
        public String currentService = "";
        public String[] services;
        public String[] characteristics;
        public int mtu = 0;
        public int txPhy = 0;
        public int rxPhy = 0;
        public int rssi = 0;
    }

}




using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NativeBLE : MonoBehaviour{

    [Serializable]
    public class BtleDevice : IEquatable<BtleDevice> {
        public string address;
        public string name;

        public bool Equals(BtleDevice other) {
            return address == other.address;
        }

        public override string ToString() {
            return name + " : " + address + "\n";
        }
    }

    [Serializable]
    public class ConnectedDevice {
        public BtleDevice deviceInfo;
        public int state = 0;
        public List<string> services = new List<string>();
        public List<string> characteristics = new List<string>();
        public int mtu = 0;
        public int txPhy = 0;
        public int rxPhy = 0;
        public int rssi = 0;

        public override string ToString() {
            string s = deviceInfo.ToString();
            s += "Services: " + services.Count + " Characteristics: " + characteristics.Count + "\n"; 
            for (int i = 0; i < services.Count; i++) {
                s += "### - " + services[i] + "\n";
                if (characteristics.Count > i) s += characteristics[i];
            }
            return s;
        }
    }

    [Serializable]
    public class BleResponse {
        public ConnectedDevice device;
        public int status = -1;
        public byte[] data = null;
        public string characteristic = null;
        public string service = null;
    }

    public enum AndroidMessagePrefix {
        DEBUG_LOG, DEBUG_ERROR
    }

    static bool available = false;
    static AndroidJavaClass unityClass;
    static AndroidJavaObject unityActivity;

    static List<BtleDevice> foundDevices = new List<BtleDevice>();
    static ConnectedDevice currentDevice = null;

    private void Awake() {
        gameObject.name = "NativeBLE";

        if (Application.platform == RuntimePlatform.Android) {
            unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
            if (unityActivity != null && unityActivity.Call<bool>("androidAvailable")) {
                available = true;
            }
        }
    }


    public static bool scanBLE() {
        AndroidJavaClass unityClass;
        AndroidJavaObject unityActivity;
        if (Application.platform == RuntimePlatform.Android) {
            unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
            if (unityActivity != null) {
                foundDevices.Clear();
                return unityActivity.Call<bool>("scanLeDevice");
            }
        }
        return false;
    }

    public static bool connectBLE(string address) {
        AndroidJavaClass unityClass;
        AndroidJavaObject unityActivity;
        if (Application.platform == RuntimePlatform.Android) {
            unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
            if (unityActivity != null) {
                foundDevices.Clear();
                return unityActivity.Call<bool>("connectLeDevice", address);
            }
        }
        return false;
    }

    public static bool exploreServices() {
        AndroidJavaClass unityClass;
        AndroidJavaObject unityActivity;
        if (Application.platform == RuntimePlatform.Android) {
            unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
            if (unityActivity != null) {
                foundDevices.Clear();
                return unityActivity.Call<bool>("exploreLeServices");
            }
        }
        return false;
    }

    public static bool writeCharacteristic(string service, string characteristic, byte[] data) {
        AndroidJavaClass unityClass;
        AndroidJavaObject unityActivity;
        if (Application.platform == RuntimePlatform.Android) {
            unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
            if (unityActivity != null) {
                foundDevices.Clear();
                return unityActivity.Call<bool>("writeCharacteristic", service, characteristic, data);
            }
        }
        return false;
    }

    public static bool readCharacteristic(string service, string characteristic) {
        AndroidJavaClass unityClass;
        AndroidJavaObject unityActivity;
        if (Application.platform == RuntimePlatform.Android) {
            unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
            if (unityActivity != null) {
                foundDevices.Clear();
                return unityActivity.Call<bool>("readCharacteristic", service, characteristic);
            }
        }
        return false;
    }

    public static void disconnectBLE() {
        AndroidJavaClass unityClass;
        AndroidJavaObject unityActivity;
        if (Application.platform == RuntimePlatform.Android) {
            unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
            if (unityActivity != null) {
                unityActivity.Call("disconnectLeDevice");
            }
        }
    }

    #region FROM_UNITY

    public static Action<BtleDevice> onScanResult;
    void scanResult(string jsonDevice) {
        BtleDevice btleDevice = JsonUtility.FromJson<BtleDevice>(jsonDevice);
        if (!foundDevices.Contains(btleDevice)) {
            foundDevices.Add(btleDevice);
            onScanResult?.Invoke(btleDevice);
        }
    }

    

    public static Action<ConnectedDevice> onConnected;
    void connected(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Connected : " + currentDevice);
        onConnected?.Invoke(new ConnectedDevice());
    }

    public static Action<int> onDisconnected;
    void disconnected(string response) {
        currentDevice = null;
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        Debug.Log("Disconnected : " +  bleResponse.status);
        onDisconnected?.Invoke(bleResponse.status);
    }

    public static Action<string, byte[]> onCharacteristicRead;
    void characteristicRead(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Characteristic write : " +  bleResponse.characteristic);
        onCharacteristicRead?.Invoke(bleResponse.characteristic, bleResponse.data);
    }

    public static Action<string> onCharacteristicWrite;
    void characteristicWrite(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Characteristic write");
        onCharacteristicWrite?.Invoke(bleResponse.characteristic);
    }

    public static Action<int> onDescriptorWrite;
    void descriptorWrite(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Descriptor write");
        onDescriptorWrite?.Invoke(bleResponse.status);
    }

    public static Action<int> onMtuChanged;
    void mtuChanged(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Mtu changed");
        onMtuChanged?.Invoke(bleResponse.status);
    }

    public static Action<int> onPhyRead;
    void phyRead(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Phy read");
        onPhyRead?.Invoke(bleResponse.status);
    }

    public static Action<int> onPhyUpdate;
    void phyUpdate(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Phy update");
        onPhyUpdate?.Invoke(bleResponse.status);
    }

    public static Action<int> onReadRemoteRssi;
    void readRemoteRssi(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Read remote rssi");
        onReadRemoteRssi?.Invoke(bleResponse.status);
    }

    public static Action<int> onReliableWriteCompleted;
    void reliableWriteCompleted(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Reliable write complete");
        onReliableWriteCompleted?.Invoke(bleResponse.status);
    }

    public static Action onServiceChanged;
    void serviceChanged(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Service changed : " + currentDevice);
        onServiceChanged?.Invoke();
    }

    public static Action<ConnectedDevice, int> onservicesDiscovered;
    void servicesDiscovered(string response) {
        BleResponse bleResponse = JsonUtility.FromJson<BleResponse>(response);
        currentDevice = bleResponse.device;
        Debug.Log("Services discovered : " + currentDevice);
        onservicesDiscovered?.Invoke(currentDevice, bleResponse.status);
    }

    void messageFromAndroid(string message) {
        //Parse prefix
        foreach (AndroidMessagePrefix prefix in (AndroidMessagePrefix[])Enum.GetValues(typeof(AndroidMessagePrefix))) {
            if (message.StartsWith(prefix.ToString())) {
                message = message.Remove(0, prefix.ToString().Length + 1);
                switch (prefix) {

                    case AndroidMessagePrefix.DEBUG_LOG:
                        message = "NativeNFC: " + message;
                        Debug.Log(message);
                        return;
                    case AndroidMessagePrefix.DEBUG_ERROR:
                        message = "NativeNFC: " + message;
                        Debug.LogError(message);
                        return;
                }
            }
        }
    }

    #endregion
}

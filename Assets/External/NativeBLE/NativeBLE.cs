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
    }

    public class ConnectedDevice {
        public BtleDevice deviceInfo;
        public int state = 0;
        public string currentService = "";
        public List<string> services = new List<string>();
        public List<string> characteristics = new List<string>();
        public int mtu = 0;
        public int txPhy = 0;
        public int rxPhy = 0;
        public int rssi = 0;
    }

    public enum AndroidMessagePrefix {
        DEBUG_LOG, DEBUG_ERROR
    }

    static bool available = false;
    static AndroidJavaClass unityClass;
    static AndroidJavaObject unityActivity;

    static List<BtleDevice> foundDevices = new List<BtleDevice>();

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

    public static Action onCharacteristicWrite;
    void characteristicWrite() {
        onCharacteristicWrite?.Invoke();
    }

    public static Action<int> onConnexionStateChanged;
    public static Action<int, ConnectedDevice> onConnected;
    public static Action<int> onDisconnected;
    void connectionStateChange(int status) {
        if (status == 0) onConnected?.Invoke(status, new ConnectedDevice());
        else onDisconnected?.Invoke(status);
        onConnexionStateChanged?.Invoke(status);
    }

    public static Action onDescriptorWrite;
    void descriptorWrite() {
        onDescriptorWrite?.Invoke();
    }

    void mtuChanged() {

    }
    
    void phyRead() {

    }

    void phyUpdate() {

    }

    void readRemoteRssi() {

    }
    
    void reliableWriteCompleted() {

    }

    void serviceChanged() {

    }

    void servicesDiscovered() {

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

using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using static NativeBLE;

public class BikeManager : MonoBehaviour{
    public static BikeManager instance;
    [Header("Loading")]
    public GameObject loadingOverlay;
    [Space]
    [Header("Scan")]
    public GameObject scanPage;
    public Button scanButton;
    public Transform deviceLineContainer;
    public GameObject deviceLine_prefab;
    [Space]
    [Header("Connect")]
    public GameObject connectPage;
    public Button closeButton;


    //Internal
    string currentDevice = "";

    #region INITIALIZATION
    private void Awake() {
        DontDestroyOnLoad(this);
        instance = this;
    }

    private void OnEnable() {
        NativeBLE.onScanResult += this.onScanResult;
        NativeBLE.onConnected += this.onConnected;
        NativeBLE.onservicesDiscovered += this.onServicesDiscovered;
    }

    private void Start() {
        scanButton.onClick.AddListener(delegate {
            scan();
        });
    }


    #endregion


    #region SCAN

    public void scan() {
        StartCoroutine(scanRoutine());
    }

    IEnumerator scanRoutine() {
        foreach (Transform child in deviceLineContainer) if(child.name != "ScanButton") Destroy(child.gameObject);
        NativeBLE.scanBLE();
        scanButton.interactable = false;
        yield return new WaitForSecondsRealtime(5);
        scanButton.interactable = true;
    }

    void onScanResult(BtleDevice btleDevice) {
        DeviceLine line = Instantiate(deviceLine_prefab, deviceLineContainer).GetComponent<DeviceLine>();
        line.set(btleDevice);
        line.button.onClick.AddListener(onDeviceSelected);
        line.transform.SetAsFirstSibling();
    }

    void onDeviceSelected() {
        loadingOverlay.SetActive(true);
    }

    void onConnected(ConnectedDevice device) {
        loadingOverlay.SetActive(false);
        scanPage.SetActive(false);
        connectPage.SetActive(true);
        NativeBLE.exploreServices();
    }

    void onServicesDiscovered(ConnectedDevice device) {
        NativeBLE.writeCharacteristic(CURRENT_STATE_SERVICE, CURRENT_STATE_WRITE_CHARACTERISTIC, new byte[] { 0x00, 0xD1, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 });
    }


    #endregion




    #region CONNECT


    public void connect(BtleDevice device) {
        NativeBLE.connectBLE(device.address);
    }


    public void disconnect() {
        NativeBLE.disconnectBLE();
    }

    

    void onDisconnected(int status) {
        scanPage.SetActive(true);
        connectPage.SetActive(false);
    }

    #endregion


    #region CURRENT_STATE
    const string CURRENT_STATE_SERVICE = "00001554-1212-efde-1523-785feabcd123";
    const string CURRENT_STATE_READ_CHARACTERISTIC = "00001564-1212-efde-1523-785feabcd123";
    const string CURRENT_STATE_WRITE_CHARACTERISTIC = "0000155f-1212-efde-1523-785feabcd123";
    byte[] currentStateId = { 3, 0 };
    Action<BikeState> currentStateCallback;

    public void getCurrentState(string device, Action<BikeState> callback) {
        currentDevice = device;
        currentStateCallback = callback;
        //BluetoothLEHardwareInterface.WriteCharacteristic(currentDevice, CURRENT_STATE_SERVICE, CURRENT_STATE_WRITE_CHARACTERISTIC, currentStateId, 0, true, currentStateWriteResponse);
        Debug.Log("Getting state 1/3");
    }
    void currentStateWriteResponse(string response) {
        //BluetoothLEHardwareInterface.ReadCharacteristic(currentDevice, CURRENT_STATE_SERVICE, CURRENT_STATE_READ_CHARACTERISTIC, currentStateReadResponse);
        Debug.Log("Getting state 2/3 " + response);
    }
    void currentStateReadResponse(string response, byte[] data) {
        string s = "Getting state 3/3 " + response + " : ";
        foreach (byte b in data) s += (int)b + " ";
        Debug.Log(s);
        currentStateCallback?.Invoke(new BikeState());
    }
    #endregion


    #region NOTIFICATIONS
    const string NOTIFICATIONS_CHARACTERISTIC = "0000155e-1212-efde-1523-785feabcd123";
    Action<BikeState> notificationsCallback;

    public void subscribeToNotifications(string device, Action<BikeState> callback) {
        currentDevice = device;
        notificationsCallback = callback;
        //BluetoothLEHardwareInterface.SubscribeCharacteristic(currentDevice, CURRENT_STATE_SERVICE, NOTIFICATIONS_CHARACTERISTIC, notificationResponse, characteristicUpdated);
        Debug.Log("Getting notifications");
    }
    void notificationResponse(string response) {
        Debug.Log("New notification " + response);
    }
    void characteristicUpdated(string uuid, byte[] data) {
    }

    public void unsubscribeToNotifications(Action<string> callback) {
        //BluetoothLEHardwareInterface.UnSubscribeCharacteristic(currentDevice, CURRENT_STATE_SERVICE, NOTIFICATIONS_CHARACTERISTIC, callback);
    }

    #endregion
}

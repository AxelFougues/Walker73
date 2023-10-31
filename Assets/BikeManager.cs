using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static NativeBLE;

public class BikeManager : MonoBehaviour {
    public static BikeManager instance;
    [Header("Loading")]
    public GameObject loadingOverlay;
    [Space]
    [Header("Scan")]
    public GameObject scanPage;
    public Button scanButton;
    public GameObject scanButtonText;
    public GameObject scanButtonloadingIcon;
    public Transform deviceLineContainer;
    public GameObject deviceLine_prefab;
    [Space]
    [Header("Connect")]
    public GameObject connectPage;
    public Button bikeButton;
    public Button unitsButton;
    public Button offButton;
    public Button lightButton;
    public Image lightGraphic;
    public TMP_Text tempText;
    public TMP_Text tempUnitsText;
    public TMP_Text voltText;
    public TMP_Text voltUnitsText;
    public Image levelGraphic;
    public TMP_Text levelText;
    public Button assistButton;
    public TMP_Text assistText;
    public TMP_Text speedText;
    public TMP_Text speedUnitsText;
    public Button modeButton;
    public TMP_Text modeText;
    [Space]
    [Header("Resources")]
    public Sprite lightOn;
    public Sprite lightOff;
    public List<Sprite> batteryLevels;
    public Sprite batteryCharging;


    //BT protocol
    const string CURRENT_STATE_SERVICE = "00001554-1212-efde-1523-785feabcd123";
    const string CURRENT_STATE_READ_CHARACTERISTIC = "00001564-1212-efde-1523-785feabcd123";
    const string CURRENT_STATE_WRITE_CHARACTERISTIC = "0000155f-1212-efde-1523-785feabcd123";
    byte[] currentStateId = { 0x03, 0x00 };

    //Internal
    string currentDevice = "";
    BikeState currentState;

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
        currentState = gameObject.AddComponent<BikeState>();
        refreshDisplay(currentState);

        scanButton.onClick.AddListener(delegate {
            scan();
        });
        bikeButton.onClick.AddListener(delegate {
            disconnect();
        });
        modeButton.onClick.AddListener(delegate {
            modeText.text = currentState.changeMode().ToString();
            applyState();
        });
        assistButton.onClick.AddListener(delegate {
            assistText.text = currentState.changeAssist().ToString();
            applyState();
        });
        lightButton.onClick.AddListener(delegate {
            bool light = currentState.toggleLight();
            lightGraphic.sprite = light ? lightOn : lightOff;
            applyState();
        });

        scan();
    }

    void refreshDisplay(BikeState state) {
        modeText.text = state.getMode().ToString();
        assistText.text = state.getAssist().ToString();
        lightGraphic.sprite = state.getLight() ? lightOn : lightOff;
    }


    #endregion


    #region SCAN

    public void scan() {
        StartCoroutine(scanRoutine());
    }

    IEnumerator scanRoutine() {
        scanButtonText.SetActive(false);
        scanButtonloadingIcon.SetActive(true);
        foreach (Transform child in deviceLineContainer) if (!child.gameObject.CompareTag("Static")) Destroy(child.gameObject);
        NativeBLE.scanBLE();
        scanButton.interactable = false;
        yield return new WaitForSecondsRealtime(5);
        scanButton.interactable = true;
        scanButtonText.SetActive(true);
        scanButtonloadingIcon.SetActive(false);
    }

    void onScanResult(BtleDevice btleDevice) {
        scanButtonText.SetActive(true);
        scanButtonloadingIcon.SetActive(false);
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
        applyState();
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


    #region COMS

    public void applyState() {
        NativeBLE.writeCharacteristic(CURRENT_STATE_SERVICE, CURRENT_STATE_WRITE_CHARACTERISTIC, currentState.getData());
    }

    public void getCurrentState(string device, Action<BikeState> callback) {
        currentDevice = device;
        NativeBLE.writeCharacteristic(CURRENT_STATE_SERVICE, CURRENT_STATE_WRITE_CHARACTERISTIC, currentStateId);
        Debug.Log("Getting state 1/3");
    }
    void currentStateWriteResponse(string response) {
        NativeBLE.readCharacteristic(CURRENT_STATE_SERVICE, CURRENT_STATE_READ_CHARACTERISTIC);
        Debug.Log("Getting state 2/3 " + response);
    }
    void currentStateReadResponse(string response, byte[] data) {
        string s = "Getting state 3/3 " + response + " : ";
        foreach (byte b in data) s += (int)b + " ";
        Debug.Log(s);
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

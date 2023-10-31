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
    public Button debugButton;
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
    [Header("Debug")]
    public GameObject debugPage;
    public Button readStateButton;
    public Button readNotificationsButton;
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
    const string NOTIFICATIONS_CHARACTERISTIC = "0000155e-1212-efde-1523-785feabcd123";
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
        NativeBLE.onCharacteristicRead += this.onCharacteristicRead;
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
        debugButton.onClick.AddListener(delegate {
            connectPage.SetActive(false);
            debugPage.SetActive(true);
        });
        readStateButton.onClick.AddListener(delegate {
            readCurrentState();
        });
        readNotificationsButton.onClick.AddListener(delegate {
            readNotifications();
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

    void onServicesDiscovered(ConnectedDevice device, int status) {
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

    public void readCurrentState() {
        NativeBLE.writeCharacteristic(CURRENT_STATE_SERVICE, CURRENT_STATE_WRITE_CHARACTERISTIC, currentStateId);
        NativeBLE.readCharacteristic(CURRENT_STATE_SERVICE, CURRENT_STATE_READ_CHARACTERISTIC);
    }
    
    public void readNotifications() {
        NativeBLE.readCharacteristic(CURRENT_STATE_SERVICE, NOTIFICATIONS_CHARACTERISTIC);
        Debug.Log("Getting notifications");
    }

    void onCharacteristicRead(string characteristic, byte[] data) {
        string s = "Received "+ characteristic +" : \n";
        foreach (byte b in data) s += (int)b + " ";
        Debug.Log(s);
    }
    #endregion



}

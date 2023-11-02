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
    public Button autoApplyButton;
    public Image autoApplyGraphic;
    [Space]
    [Header("Debug")]
    public TMP_Text notifText;

    public GameObject debugPage;
    public Button readStateButton;
    public Button readNotificationsButton;
    public Button clearButton;
    public TMP_Text logText;
    [Space]
    [Header("Resources")]
    public Sprite lightOn;
    public Sprite lightOff;
    public Sprite autoApplyOn;
    public Sprite autoApplyOff;
    public List<Sprite> batteryLevels;
    public Sprite batteryCharging;


    //BT protocol
    const string UUID_METRICS_SERVICE = "00001554-1212-efde-1523-785feabcd123";
    const string UUID_CHARACTERISTIC_REGISTER_ID = "00001564-1212-efde-1523-785feabcd123";
    const string UUID_CHARACTERISTIC_REGISTER = "0000155f-1212-efde-1523-785feabcd123";
    const string UUID_CHARACTERISTIC_REGISTER_NOTIFIER = "0000155e-1212-efde-1523-785feabcd123";
    byte[] currentStateId = { 0x03, 0x00 };

    List<string> notifs = new List<string> {
        "2 1",
        "2 2",
        "2 3",
        "3 0",
        "4 1"
    };

    //Internal
    string currentDevice = "";
    BikeState currentState;

    #region INITIALIZATION
    private void Awake() {
        DontDestroyOnLoad(this);
        instance = this;
        /*
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x1A, 0x04 }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x00, 0x05 }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x00, 0x07 }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x00, 0x09 }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x58, 0x0B }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x00, 0x0F }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x30, 0x16 }));
        
        int x = BitConverter.ToUInt16(new byte[] { 0x30, 0x16 });
        Debug.Log(x);
        Debug.Log(0.009876614 * x + 1.228228);
        */
    }

    private void OnEnable() {
        NativeBLE.onScanResult += this.onScanResult;
        NativeBLE.onConnected += this.onConnected;
        NativeBLE.onservicesDiscovered += this.onServicesDiscovered;
        NativeBLE.onCharacteristicRead += this.onCharacteristicRead;
        NativeBLE.onCharacteristicWrite += this.onCharacteristicWrite;
        NativeBLE.onCharacteristicChanged += this.onCharacteristicRead;
    }

    private void Start() {
        scanPage.SetActive(true);
        connectPage.SetActive(false);
        debugPage.SetActive(false);
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
        autoApplyGraphic.sprite = PlayerPrefs.GetInt("auto", 1) == 1 ? autoApplyOn : autoApplyOff;
        autoApplyButton.onClick.AddListener(delegate {
            bool newAutoApply = !(PlayerPrefs.GetInt("auto", 1) == 1);
            autoApplyGraphic.sprite = newAutoApply ? autoApplyOn : autoApplyOff;
            PlayerPrefs.SetInt("auto", newAutoApply?1:0);
        });

        readStateButton.onClick.AddListener(delegate {
            readCurrentState();
        });
        readNotificationsButton.onClick.AddListener(delegate {
            readNotifications();
        });
        clearButton.onClick.AddListener(delegate {
            logText.text = "";
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
        speedText.text = state.getReadableSpeed();
        levelText.text = state.getRawSpeed().ToString();
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
        if (string.IsNullOrEmpty(btleDevice.name)) return;
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

    #endregion




    #region CONNECT

    public void connect(BtleDevice device) {
        NativeBLE.connectBLE(device.address);
    }

    void onConnected(ConnectedDevice device) {
        loadingOverlay.SetActive(false);
        scanPage.SetActive(false);
        connectPage.SetActive(true);
        NativeBLE.exploreServices();
    }

    void onServicesDiscovered(ConnectedDevice device, int status) {
        if (PlayerPrefs.GetInt("auto", 1) == 1) applyState();
        else readCurrentState();
        subscribeNotifications(true);
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
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER, currentState.getData());
    }

    public void readCurrentState() {
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER_ID, currentStateId);
        Debug.Log("Getting current state");
    }
    public void readCurrentStateStep2() {
        NativeBLE.readCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER);
        Debug.Log("Getting current state 2");
    }
    
    public void readNotifications() {
        NativeBLE.readCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER_NOTIFIER);
        Debug.Log("Getting notifications");
    }

    public void subscribeNotifications(bool subscribe) {
        NativeBLE.subscribeCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER_NOTIFIER, subscribe);
    }

    void onCharacteristicWrite(string characteristic) {
        if (characteristic.Trim() == UUID_CHARACTERISTIC_REGISTER_ID) readCurrentStateStep2();
    }

    void onCharacteristicRead(string characteristic, byte[] data) {
        
        if (characteristic == UUID_CHARACTERISTIC_REGISTER_NOTIFIER) { // notif

            if (data != null && data.Length == 10) updateNotificationDebug(data);
            if (currentState.setData(data)) refreshDisplay(currentState);

        } else if (characteristic == UUID_CHARACTERISTIC_REGISTER) { // state

            if (currentState.setData(data)) refreshDisplay(currentState);

        } else {

            string s = "Received " + characteristic + " : \n";
            foreach (byte b in data) s += (int)b + " ";
            Debug.Log(s);
        }
    }


    void updateNotificationDebug(byte[] data) {
        string debugString = "";
        foreach (byte b in data) debugString += (int)b + " ";

        if (data[0] == 0x03) {
            if (currentState.setData(data)) refreshDisplay(currentState);
        }
        if (data[0] == 0x02) {
            if (data[0] == 0x02 && data[1] == 0x01) notifs[0] = debugString;
            else if (data[0] == 0x02 && data[1] == 0x02) notifs[1] = debugString;
            else if (data[0] == 0x02 && data[1] == 0x03) notifs[2] = debugString;
        } else if (data[0] == 0x03) {
            notifs[3] = debugString;

        } else if (data[0] == 0x04) {
            notifs[4] = debugString;
        }

        //debug text
        notifText.text = notifs[0] + "\n" + notifs[1] + "\n" + notifs[2] + "\n" + notifs[3] + "\n" + notifs[4];
    }


    #endregion



}

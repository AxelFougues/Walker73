using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static NativeBLE;

public class BikeManager : MonoBehaviour {
    public static BikeManager instance;


    //Base prefs
    public static float PEDAL_DIAMETRER_M = 0.125f;
    public static float WHEEL_DIAMETRER_M = 0.57f;
    public static float MAX_VOLTAGE_V = 0.57f;
    public static float MIN_VOLTAGE_V = 0.57f;
    public static float TOTAL_RANGE_KM = 60f;


    public static byte[] SPEED_ID = { 0x02, 0x01 };
    public static byte[] TOTAL_ID = { 0x02, 0x02 };
    public static byte[] PEDAL_ID = { 0x02, 0x03 };
    public static byte[] SETTINGS_ID = { 0x03, 0x00 };
    public static byte[] POWER_ID = { 0x04, 0x01 };


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
    [Space]
    public Button modeButton;
    public TMP_Text modeText;
    public TMP_Text speedText;
    public TMP_Text speedUnitsText;
    [Space]
    public Image levelGraphic;
    public TMP_Text levelText;
    public Button assistButton;
    public TMP_Text assistText;
    [Space]
    public TMP_Text tempText;
    public TMP_Text tempUnitsText;
    public TMP_Text voltText;
    public TMP_Text voltUnitsText;
    [Space]
    public Button lightButton;
    public Image lightGraphic;
    public TMP_Text totalText;
    public TMP_Text totalUnitsText;
    [Space]
    public TMP_Text wheelRPMText;
    public TMP_Text pedalRPMText;
    //
    public Toggle autoApplyToggle;
    public Toggle autoConnectToggle;
    public Button unitsButton;
    public Button prefsButton;
    [Space]
    [Header("Debug")]
    public TMP_Text notifText;
    public GameObject prefsOverlay;
    [Space]
    [Header("Resources")]
    public Sprite lightOn;
    public Sprite lightOff;
    public List<Sprite> batteryLevels;
    public Sprite batteryCharging;


    //BT protocol
    const string UUID_METRICS_SERVICE = "00001554-1212-efde-1523-785feabcd123";
    const string UUID_CHARACTERISTIC_REGISTER_ID = "00001564-1212-efde-1523-785feabcd123";
    const string UUID_CHARACTERISTIC_REGISTER = "0000155f-1212-efde-1523-785feabcd123";
    const string UUID_CHARACTERISTIC_REGISTER_NOTIFIER = "0000155e-1212-efde-1523-785feabcd123";
    

    List<string> debugNotificationText = new List<string> {
        "2 1",
        "2 2",
        "2 3",
        "3 0",
        "4 1"
    };

    //Internal
    BikeState currentBikeState;
    bool registerAvailable = true;

    #region INITIALIZATION
    private void Awake() {
        DontDestroyOnLoad(this);
        instance = this;

        /*
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x00, 0x04 }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x58, 0x07 }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x00, 0x09 }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x00, 0x09 }));
        Debug.Log(BitConverter.ToUInt16(new byte[] { 0x58, 0x10 }));
        */
 
    }

    private void OnEnable() {
        NativeBLE.onScanResult += this.onScanResult;
        NativeBLE.onConnected += this.onConnected;
        NativeBLE.onDisconnected += this.onDisconnected;
        NativeBLE.onservicesDiscovered += this.onServicesDiscovered;
        NativeBLE.onCharacteristicRead += this.onCharacteristicRead;
        NativeBLE.onCharacteristicWrite += this.onCharacteristicWrite;
        NativeBLE.onCharacteristicChanged += this.onCharacteristicRead;
    }

    private void Start() {
        scanPage.SetActive(true);
        connectPage.SetActive(false);
        prefsOverlay.SetActive(false);
        loadingOverlay.SetActive(false);

        currentBikeState = gameObject.AddComponent<BikeState>();
        refreshDisplay(currentBikeState);

        scanButton.onClick.AddListener(delegate {
            scan();
        });
        //
        modeButton.onClick.AddListener(delegate {
            modeText.text = currentBikeState.changeMode().ToString();
            applySettings();
        });
        //
        assistButton.onClick.AddListener(delegate {
            assistText.text = currentBikeState.changeAssist().ToString();
            applySettings();
        });
        //

        //
        lightButton.onClick.AddListener(delegate {
            bool light = currentBikeState.toggleLight();
            lightGraphic.sprite = light ? lightOn : lightOff;
            applySettings();
        });
        bikeButton.onClick.AddListener(delegate {
            disconnect();
        });
        autoApplyToggle.isOn = PlayerPrefs.GetInt("auto", 1) == 1;
        autoApplyToggle.onValueChanged.AddListener(delegate {
            PlayerPrefs.SetInt("auto", autoApplyToggle.isOn ? 1 : 0);
        });
        unitsButton.onClick.AddListener(delegate {
            currentBikeState.toggleMetric();
            refreshDisplay(currentBikeState);
        });
        prefsButton.onClick.AddListener(delegate {
            prefsOverlay.SetActive(true);
        });
        

        scan();
    }

    void refreshDisplay(BikeState state) {
        modeText.text = state.getMode().ToString();
        assistText.text = state.getAssist().ToString();
        lightGraphic.sprite = state.getLight() ? lightOn : lightOff;

        speedText.text = state.getReadableWheelSpeed();
        speedUnitsText.text = state.getMetric() ? "kmh" : "mph";

        tempUnitsText.text = state.getMetric() ? "°C" : "°F";

        totalText.text = state.getReadableTotal();
        totalUnitsText.text = state.getMetric() ? "km" : "mi";

        wheelRPMText.text = state.getReadableWheelRPM();
        pedalRPMText.text = state.getReadablePedalRPM();
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
        if (PlayerPrefs.HasKey(btleDevice.address)) {
            BikeManager.instance.connect(btleDevice);
        } else {
            scanButtonText.SetActive(true);
            scanButtonloadingIcon.SetActive(false);
            DeviceLine line = Instantiate(deviceLine_prefab, deviceLineContainer).GetComponent<DeviceLine>();
            line.set(btleDevice);
            line.transform.SetAsFirstSibling();
        }
    }

    #endregion




    #region CONNECT

    public void connect(BtleDevice device) {
        if (NativeBLE.connectBLE(device.address)) loadingOverlay.SetActive(true);
        else scan();
    }

    void onConnected(ConnectedDevice device) {
        loadingOverlay.SetActive(false);
        scanPage.SetActive(false);
        connectPage.SetActive(true);
        NativeBLE.exploreServices();
    }

    void onServicesDiscovered(ConnectedDevice device, int status) {
        if (PlayerPrefs.GetInt("auto", 1) == 1) applySettings();
        StartCoroutine(getStartupInfoRoutine());
        subscribeNotifications(true);
        autoConnectToggle.isOn = PlayerPrefs.HasKey(device.deviceInfo.address);
        autoConnectToggle.onValueChanged.AddListener(delegate {
            if (autoConnectToggle.isOn) {
                ConnectedDevice connectedDevice = NativeBLE.getConnectedDevice();
                if (connectedDevice != null) PlayerPrefs.SetInt(connectedDevice.deviceInfo.address, 1);
                else autoConnectToggle.isOn = false;
            } else {
                ConnectedDevice connectedDevice = NativeBLE.getConnectedDevice();
                if (connectedDevice != null && PlayerPrefs.HasKey(connectedDevice.deviceInfo.address)) PlayerPrefs.DeleteKey(connectedDevice.deviceInfo.address);
            }
        });
    }

    IEnumerator getStartupInfoRoutine() {
        yield return new WaitUntil(() => registerAvailable);
        registerSettings();
        yield return new WaitUntil(() => registerAvailable);
        registerTotal();
    }

    public void disconnect() {
        NativeBLE.disconnectBLE();
    }

    void onDisconnected(string status) {
        scanPage.SetActive(true);
        loadingOverlay.SetActive(false);
        connectPage.SetActive(false);
        scan();
    }

    
    #endregion


    #region COMS

    public void applySettings() {
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER, currentBikeState.getData());
    }

    //Notifications
    public void subscribeNotifications(bool subscribe) {
        NativeBLE.subscribeCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER_NOTIFIER, subscribe);
    }

    //Register
    public void registerSettings() {
        registerAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER_ID, SETTINGS_ID);
        Debug.Log("Registering settings");
    }

    public void registerTotal() {
        registerAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER_ID, TOTAL_ID);
        Debug.Log("Registering total");
    }

    void onCharacteristicWrite(string characteristic) {
        readRegister();
    }

    public void readRegister() {
        NativeBLE.readCharacteristic(UUID_METRICS_SERVICE, UUID_CHARACTERISTIC_REGISTER);
        Debug.Log("Reading register");
    }

    
    //Results
    void onCharacteristicRead(string characteristic, byte[] data) {
        if (data != null && data.Length == 10) { //Valid data
            updateNotificationDebug(data);
            if (currentBikeState.processData(data)) refreshDisplay(currentBikeState);
        }

        if (characteristic == UUID_CHARACTERISTIC_REGISTER_NOTIFIER) {
            Debug.Log("Recieved notification");

        } else if (characteristic == UUID_CHARACTERISTIC_REGISTER) {
            registerAvailable = true;
            Debug.Log("Recieved register");

        } else {
            string s = "Received " + characteristic + " : \n";
            foreach (byte b in data) s += (int)b + " ";
            Debug.Log(s);
        }
    }


    void updateNotificationDebug(byte[] data) {
        string debugString = "";
        foreach (byte b in data) debugString += (int)b + " ";

        if (data[0] == 0x02) {
            if (data[0] == 0x02 && data[1] == 0x01) debugNotificationText[0] = debugString;
            else if (data[0] == 0x02 && data[1] == 0x02) {
                tempText.text = BitConverter.ToUInt16(new byte[] { data[2], data[3] }).ToString();
                debugNotificationText[1] = debugString;
            } else if (data[0] == 0x02 && data[1] == 0x03) debugNotificationText[2] = debugString;
        } else if (data[0] == 0x03) {
            debugNotificationText[3] = debugString;

        } else if (data[0] == 0x04) {
            debugNotificationText[4] = debugString;
            voltText.text = BitConverter.ToUInt16(new byte[] { data[2], data[3] }).ToString();
            levelText.text = BitConverter.ToUInt16(new byte[] { data[5], data[6] }).ToString();
        }

        //debug text
        notifText.text = debugNotificationText[0] + "\n" + debugNotificationText[1] + "\n" + debugNotificationText[2] + "\n" + debugNotificationText[3] + "\n" + debugNotificationText[4];
    }


    #endregion



}

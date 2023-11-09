using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static NativeBLE;

public class BikeManager : MonoBehaviour {
    public static BikeManager instance;


    public static float PEDAL_DIAMETRER_M = 0.125f;
    public static float WHEEL_DIAMETRER_M = 0.57f;
    public static float MAX_VOLTAGE_V = 54.6f;
    public static float MIN_VOLTAGE_V = 32.5f;
    public static float BASE_MAX_RANGE_KM = 60f;
    public static float REAL_MAX_RANGE_KM = 60f;

    public static byte[] SPEED_ID = { 0x02, 0x01 };
    public static byte[] TOTAL_ID = { 0x02, 0x02 };
    public static byte[] PEDAL_ID = { 0x02, 0x03 };
    public static byte[] SETTINGS_ID = { 0x03, 0x00 };
    public static byte[] POWER_ID = { 0x04, 0x01 };

    public Button themeButton;
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
    public TMP_Text modeDescriptorNameText;
    public TMP_Text modeDescriptorSpeedText;
    public TMP_Text modeDescriptorPowerText;
    public TMP_Text modeDescriptorThrottleText;
    public TMP_Text speedText;
    public TMP_Text speedUnitsText;
    [Space]
    public Image levelGraphic;
    public TMP_Text levelText;
    public Button assistButton;
    public TMP_Text assistText;
    [Space]
    public Button lightButton;
    public Image lightGraphic;
    public TMP_Text rangeText;
    public TMP_Text rangeUnitsText;
    [Space]
    public TMP_Text wheelRPMText;
    public TMP_Text pedalRPMText;
    public TMP_Text totalText;
    public TMP_Text totalUnitsText;
    [Space]
    public Toggle autoApplyToggle;
    public Toggle autoConnectToggle;
    public Button unitsButton;
    public Button prefsButton;
    [Space]
    public TMP_Text deviceNameText;
    public TMP_Text manufacturerNameText;
    public TMP_Text softwareVersionText;
    public TMP_Text hardwareVersionText;
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
    const string UUID_GENERIC_ACCESS_SERVICE         = "00001800-0000-1000-8000-00805f9b34fb";
    const string UUID_GENERIC_ACCESS_NAME_CHARACTERISTIC = "00002a00-0000-1000-8000-00805f9b34fb"; // 53 55 50 45 52 37 33
    const string UUID_GENERIC_ACCESS_APPEARANCE_CHARACTERISTIC = "00002a01-0000-1000-8000-00805f9b34fb"; //00 04 
    const string UUID_GENERIC_ACCESS_PPCP_CHARACTERISTIC = "00002a04-0000-1000-8000-00805f9b34fb"; //0C 00 24 00 00 00 00 01
    const string UUID_GENERIC_ACCESS_CAR_CHARACTERISTIC = "00002aa6-0000-1000-8000-00805f9b34fb"; //01

    const string UUID_GENERIC_ATTRIBUTE_SERVICE         = "00001801-0000-1000-8000-00805f9b34fb";
    const string UUID_GENERIC_ATTRIBUTE_SERVICE_CHANGED_CHARACTERISTIC = "00002a05-0000-1000-8000-00805f9b34fb";

    const string UUID_SECURE_DFU_SERVICE         = "0000fe59-0000-1000-8000-00805f9b34fb";
    const string UUID_SECURE_DFU_BUTTONLESS_DFU_CHARACTERISTIC = "8ec90003-f315-4f60-9fb8-838830daea50";

    const string UUID_DEVICE_INFO_SERVICE         = "0000180a-0000-1000-8000-00805f9b34fb"; 
    const string UUID_DEVICE_INFO_MANUFACTURER_CHARACTERISTIC = "00002a29-0000-1000-8000-00805f9b34fb"; // 43 4F 4D 4F 44 55 4C 45
    const string UUID_DEVICE_INFO_HARDWARE_CHARACTERISTIC = "00002a27-0000-1000-8000-00805f9b34fb"; // 76 33 2E 32 2E 30
    const string UUID_DEVICE_INFO_FIRMWARE_CHARACTERISTIC = "00002a26-0000-1000-8000-00805f9b34fb"; // 32 32 31 31 32 32
    const string UUID_DEVICE_INFO_SOFTWARE_CHARACTERISTIC = "00002a28-0000-1000-8000-00805f9b34fb"; // 32 32 31 31 32 32


    const string UUID_UNKNOWN_SERVICE         = "00001580-0000-1000-8000-00805f9b34fb"; 
    const string UUID_UNKNOWN_CHARACTERISTIC = "00001581-0000-1000-8000-00805f9b34fb";

    const string UUID_SECURITY_SERVICE         = "00002554-1212-efde-1523-785feabcd123";
    const string UUID_SECURITY_PRIVATE_KEY_CHARACTERISTIC = "00002555-1212-efde-1523-785feabcd123";
    const string UUID_SECURITY_PUBLIC_KEY_CHARACTERISTIC = "00002556-1212-efde-1523-785feabcd123";
    const string UUID_SECURITY_HASH_CHARACTERISTIC = "00002557-1212-efde-1523-785feabcd123";
    const string UUID_SECURITY_AUTH_CHARACTERISTIC = "00002558-1212-efde-1523-785feabcd123";

    const string UUID_METRICS_SERVICE                          = "00001554-1212-efde-1523-785feabcd123";
    const string UUID_METRICS_CHARACTERISTIC_REGISTER_ID       = "00001564-1212-efde-1523-785feabcd123";
    const string UUID_METRICS_CHARACTERISTIC_REGISTER          = "0000155f-1212-efde-1523-785feabcd123";
    const string UUID_METRICS_CHARACTERISTIC_REGISTER_NOTIFIER = "0000155e-1212-efde-1523-785feabcd123";



    List<string> debugNotificationText = new List<string> {
        "2 1",
        "2 2",
        "2 3",
        "3 0",
        "4 1"
    };

    //Internal
    BikeState currentBikeState;
    bool readAvailable = true;

    #region INITIALIZATION
    private void Awake() {
        DontDestroyOnLoad(this);
        instance = this;
        //Base Prefs

        if (!PlayerPrefs.HasKey("PEDAL_DIAMETRER_M")) PlayerPrefs.SetFloat("PEDAL_DIAMETRER_M", PEDAL_DIAMETRER_M);
        if (!PlayerPrefs.HasKey("WHEEL_DIAMETRER_M")) PlayerPrefs.SetFloat("WHEEL_DIAMETRER_M", WHEEL_DIAMETRER_M);
        if (!PlayerPrefs.HasKey("MAX_VOLTAGE_V")) PlayerPrefs.SetFloat("MAX_VOLTAGE_V", MAX_VOLTAGE_V);
        if (!PlayerPrefs.HasKey("MIN_VOLTAGE_V")) PlayerPrefs.SetFloat("MIN_VOLTAGE_V", MIN_VOLTAGE_V);
        if (!PlayerPrefs.HasKey("BASE_MAX_RANGE_KM")) PlayerPrefs.SetFloat("BASE_MAX_RANGE_KM", BASE_MAX_RANGE_KM);
        if (!PlayerPrefs.HasKey("REAL_MAX_RANGE_KM")) PlayerPrefs.SetFloat("REAL_MAX_RANGE_KM", REAL_MAX_RANGE_KM);

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
        StartCoroutine(setThemeRoutine());

        scanPage.SetActive(true);
        connectPage.SetActive(false);
        prefsOverlay.SetActive(false);
        loadingOverlay.SetActive(false);

        currentBikeState = gameObject.AddComponent<BikeState>();
        refreshDisplay(currentBikeState);

        themeButton.onClick.AddListener(delegate {
            if (ColorManager.instance.theme == ColorManager.instance.darkTheme) {
                ColorManager.instance.setTheme(ColorManager.instance.lightTheme);
                PlayerPrefs.SetString("theme", DeviceTheme.LIGHT.ToString());
            } else {
                ColorManager.instance.setTheme(ColorManager.instance.darkTheme);
                PlayerPrefs.SetString("theme", DeviceTheme.DARK.ToString());
            }
        });
        //
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


    IEnumerator setThemeRoutine() {
        yield return new WaitForEndOfFrame();
        if (PlayerPrefs.HasKey("theme")) {
            if (PlayerPrefs.GetString("theme", "") == DeviceTheme.DARK.ToString()) ColorManager.instance.setTheme(ColorManager.instance.darkTheme);
            else ColorManager.instance.setTheme(ColorManager.instance.lightTheme);
        } else if (NativeBLE.androidTheme == DeviceTheme.DARK) ColorManager.instance.setTheme(ColorManager.instance.darkTheme);
        else if (NativeBLE.androidTheme == DeviceTheme.LIGHT) ColorManager.instance.setTheme(ColorManager.instance.lightTheme);
    }

    void refreshDisplay(BikeState state) {
        if(modeText!= null) modeText.text = state.getMode().ToString();
        if (modeDescriptorNameText != null) modeDescriptorNameText.text = state.getModeDescriptorName();
        if (modeDescriptorSpeedText != null) modeDescriptorSpeedText.text = state.getModeDescriptorSpeedReadable();
        if (modeDescriptorPowerText != null) modeDescriptorPowerText.text = state.getModeDescriptorPowerReadable();
        if (modeDescriptorThrottleText != null) modeDescriptorThrottleText.text = state.getModeDescriptorThrottleReadable();

        if (assistText != null) assistText.text = state.getAssist().ToString();
        if (lightGraphic != null) lightGraphic.sprite = state.getLight() ? lightOn : lightOff;

        if (speedText != null) speedText.text = state.getReadableWheelSpeed();
        if (speedUnitsText != null) speedUnitsText.text = state.getMetric() ? "kmh" : "mph";

        if (rangeText != null) rangeText.text = state.getReadableRange();
        if (rangeUnitsText != null) rangeUnitsText.text = state.getMetric() ? "km" : "mi";

        if (levelText != null) levelText.text = state.getReadableBatteryLevel();
        if (levelGraphic != null) levelGraphic.sprite = batteryLevels[Mathf.RoundToInt(Mathf.Lerp(0,4, state.getBatteryLevel()/100f))];

        if (totalText != null) totalText.text = state.getReadableTotal();
        if (totalUnitsText != null) totalUnitsText.text = state.getMetric() ? "km" : "mi";

        if (wheelRPMText != null) wheelRPMText.text = state.getReadableWheelRPM();
        if (pedalRPMText != null) pedalRPMText.text = state.getReadablePedalRPM();
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
        if (!device.services.Contains(UUID_METRICS_SERVICE)) {
            disconnect();
            return;
        }
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
        Debug.Log(device);
    }

    IEnumerator getStartupInfoRoutine() {
        yield return new WaitUntil(() => readAvailable);
        registerSettings();
        yield return new WaitUntil(() => readAvailable);
        registerTotal();
        yield return new WaitUntil(() => readAvailable);
        registerPedal();
        yield return new WaitUntil(() => readAvailable);
        registerPower();
        yield return new WaitUntil(() => readAvailable);
        registerSpeed();
        yield return new WaitUntil(() => readAvailable);
        readDeviceName();
        yield return new WaitUntil(() => readAvailable);
        readManufacturerName();
        yield return new WaitUntil(() => readAvailable);
        readSoftwareVersion();
        yield return new WaitUntil(() => readAvailable);
        readHardwareVersion();
    }

    void disconnect() {
        //Disable auto-connect
        ConnectedDevice connectedDevice = NativeBLE.getConnectedDevice();
        if (connectedDevice != null && PlayerPrefs.HasKey(connectedDevice.deviceInfo.address)) PlayerPrefs.DeleteKey(connectedDevice.deviceInfo.address);
        //Close connection
        if (NativeBLE.disconnectBLE()) onDisconnected("User disconnected.");
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
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER, currentBikeState.getData());
    }

    //Notifications
    public void subscribeNotifications(bool subscribe) {
        NativeBLE.subscribeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_NOTIFIER, subscribe);
    }

    //Register
    void registerSettings() {
        readAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, SETTINGS_ID);
        Debug.Log("Registering settings");
    }

    void registerTotal() {
        readAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, TOTAL_ID);
        Debug.Log("Registering total");
    }

    void registerPedal() {
        readAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, PEDAL_ID);
        Debug.Log("Registering total");
    }

    void registerPower() {
        readAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, POWER_ID);
        Debug.Log("Registering total");
    }

    void registerSpeed() {
        readAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, SPEED_ID);
        Debug.Log("Registering total");
    }

    void onCharacteristicWrite(string characteristic) {
        readRegister();
    }

    void readRegister() {
        NativeBLE.readCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER);
        Debug.Log("Reading register");
    }

    //Other reads

    void readDeviceName() {
        readAvailable = false;
        NativeBLE.readCharacteristic(UUID_GENERIC_ACCESS_SERVICE, UUID_GENERIC_ACCESS_NAME_CHARACTERISTIC);
        Debug.Log("Reading device name");
    }

    void readManufacturerName() {
        readAvailable = false;
        NativeBLE.readCharacteristic(UUID_DEVICE_INFO_SERVICE, UUID_DEVICE_INFO_MANUFACTURER_CHARACTERISTIC);
        Debug.Log("Reading manufacturer");
    }

    void readSoftwareVersion() {
        readAvailable = false;
        NativeBLE.readCharacteristic(UUID_DEVICE_INFO_SERVICE, UUID_DEVICE_INFO_SOFTWARE_CHARACTERISTIC);
        Debug.Log("Reading software v.");
    }

    void readHardwareVersion() {
        readAvailable = false;
        NativeBLE.readCharacteristic(UUID_DEVICE_INFO_SERVICE, UUID_DEVICE_INFO_HARDWARE_CHARACTERISTIC);
        Debug.Log("Reading hardware v.");
    }

    //Results
    void onCharacteristicRead(string characteristic, byte[] data) {
        //New bike data
        if (characteristic == UUID_METRICS_CHARACTERISTIC_REGISTER || characteristic == UUID_METRICS_CHARACTERISTIC_REGISTER_NOTIFIER) {

            if (data != null && data.Length == 10) { //Valid data
                updateNotificationDebug(data);
                if (currentBikeState.processData(data)) refreshDisplay(currentBikeState);
            }
            if (characteristic == UUID_METRICS_CHARACTERISTIC_REGISTER) readAvailable = true;
        //New device name
        } else if (characteristic == UUID_GENERIC_ACCESS_NAME_CHARACTERISTIC) {
            if (data != null && data.Length > 0) {
                string deviceName = System.Text.Encoding.ASCII.GetString(data);
                currentBikeState.setDeviceName(deviceName);
                deviceNameText.text = deviceName;
                readAvailable = true;
            }
        //New manufacturer name
        } else if (characteristic == UUID_DEVICE_INFO_MANUFACTURER_CHARACTERISTIC) {
            if (data != null && data.Length > 0) {
                string manufacturerName = System.Text.Encoding.ASCII.GetString(data);
                currentBikeState.setManufacturerName(manufacturerName);
                manufacturerNameText.text = manufacturerName;
                readAvailable = true;
            }
        //New software version
        } else if (characteristic == UUID_DEVICE_INFO_SOFTWARE_CHARACTERISTIC) {
            if (data != null && data.Length > 0) {
                string softwareVersion = System.Text.Encoding.ASCII.GetString(data);
                currentBikeState.setSoftwareVersion(softwareVersion);
                softwareVersionText.text = softwareVersion;
                readAvailable = true;
            }
        //New hardware version
        } else if (characteristic == UUID_DEVICE_INFO_HARDWARE_CHARACTERISTIC) {
            if (data != null && data.Length > 0) {
                string hardwareVersion = System.Text.Encoding.ASCII.GetString(data);
                currentBikeState.setHardwareVersion(hardwareVersion);
                hardwareVersionText.text = hardwareVersion;
                readAvailable = true;
            }
        } else {
            string s = "### Received " + characteristic + " : \n";
            s += BitConverter.ToString(data).Replace("-", " ");
            Debug.Log(s);
        }
    }


    void updateNotificationDebug(byte[] data) {
        string debugString = BitConverter.ToString(data).Replace("-", " ");

        if (data[0] == 0x02) {
            if (data[0] == 0x02 && data[1] == 0x01) debugNotificationText[0] = debugString;
            else if (data[0] == 0x02 && data[1] == 0x02) {
                debugNotificationText[1] = debugString;
            } else if (data[0] == 0x02 && data[1] == 0x03) debugNotificationText[2] = debugString;
        } else if (data[0] == 0x03) {
            debugNotificationText[3] = debugString;

        } else if (data[0] == 0x04) {
            debugNotificationText[4] = debugString;
        }

        //debug text
        notifText.text = debugNotificationText[0] + "\n" + debugNotificationText[1] + "\n" + debugNotificationText[2] + "\n" + debugNotificationText[3] + "\n" + debugNotificationText[4];
    }


    #endregion



}

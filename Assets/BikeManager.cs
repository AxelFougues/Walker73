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
    public static float CELL_S_COUNT = 13;
    public static float BASE_MAX_RANGE_KM = 60f;
    public static float REAL_MAX_RANGE_KM = 60f;
    public static float CHARGE_CURRENT_THRESHOLD = 0.2f;

    public static byte[] MYSTERY_ID = { 0x00, 0x00 };
    public static byte[] MOTION_ID = { 0x02, 0x01 };
    public static byte[] TOTAL_ID = { 0x02, 0x02 };
    public static byte[] RIDE_ID = { 0x02, 0x03 };
    public static byte[] SETTINGS_ID = { 0x03, 0x00 };
    public static byte[] POWER_ID = { 0x04, 0x01 };

    //BT protocol
    const string UUID_GENERIC_ACCESS_SERVICE = "00001800-0000-1000-8000-00805f9b34fb";
    const string UUID_GENERIC_ACCESS_NAME_CHARACTERISTIC = "00002a00-0000-1000-8000-00805f9b34fb"; // 53 55 50 45 52 37 33
    const string UUID_GENERIC_ACCESS_APPEARANCE_CHARACTERISTIC = "00002a01-0000-1000-8000-00805f9b34fb"; //00 04 
    const string UUID_GENERIC_ACCESS_PPCP_CHARACTERISTIC = "00002a04-0000-1000-8000-00805f9b34fb"; //0C 00 24 00 00 00 00 01
    const string UUID_GENERIC_ACCESS_CAR_CHARACTERISTIC = "00002aa6-0000-1000-8000-00805f9b34fb"; //01

    const string UUID_GENERIC_ATTRIBUTE_SERVICE = "00001801-0000-1000-8000-00805f9b34fb";
    const string UUID_GENERIC_ATTRIBUTE_SERVICE_CHANGED_CHARACTERISTIC = "00002a05-0000-1000-8000-00805f9b34fb";

    const string UUID_SECURE_DFU_SERVICE = "0000fe59-0000-1000-8000-00805f9b34fb";
    const string UUID_SECURE_DFU_BUTTONLESS_DFU_CHARACTERISTIC = "8ec90003-f315-4f60-9fb8-838830daea50";

    const string UUID_DEVICE_INFO_SERVICE = "0000180a-0000-1000-8000-00805f9b34fb";
    const string UUID_DEVICE_INFO_MANUFACTURER_CHARACTERISTIC = "00002a29-0000-1000-8000-00805f9b34fb"; // 43 4F 4D 4F 44 55 4C 45
    const string UUID_DEVICE_INFO_HARDWARE_CHARACTERISTIC = "00002a27-0000-1000-8000-00805f9b34fb"; // 76 33 2E 32 2E 30
    const string UUID_DEVICE_INFO_FIRMWARE_CHARACTERISTIC = "00002a26-0000-1000-8000-00805f9b34fb"; // 32 32 31 31 32 32
    const string UUID_DEVICE_INFO_SOFTWARE_CHARACTERISTIC = "00002a28-0000-1000-8000-00805f9b34fb"; // 32 32 31 31 32 32


    const string UUID_UNKNOWN_SERVICE = "00001580-0000-1000-8000-00805f9b34fb";
    const string UUID_UNKNOWN_CHARACTERISTIC = "00001581-0000-1000-8000-00805f9b34fb";

    const string UUID_SECURITY_SERVICE = "00002554-1212-efde-1523-785feabcd123";
    const string UUID_SECURITY_PRIVATE_KEY_CHARACTERISTIC = "00002555-1212-efde-1523-785feabcd123";
    const string UUID_SECURITY_PUBLIC_KEY_CHARACTERISTIC = "00002556-1212-efde-1523-785feabcd123";
    const string UUID_SECURITY_HASH_CHARACTERISTIC = "00002557-1212-efde-1523-785feabcd123";
    const string UUID_SECURITY_AUTH_CHARACTERISTIC = "00002558-1212-efde-1523-785feabcd123";

    const string UUID_METRICS_SERVICE = "00001554-1212-efde-1523-785feabcd123";
    const string UUID_METRICS_CHARACTERISTIC_REGISTER_ID = "00001564-1212-efde-1523-785feabcd123";
    const string UUID_METRICS_CHARACTERISTIC_REGISTER = "0000155f-1212-efde-1523-785feabcd123";
    const string UUID_METRICS_CHARACTERISTIC_REGISTER_NOTIFIER = "0000155e-1212-efde-1523-785feabcd123";


    public class BikeNotification{
        public string name;
        public byte[] id = new byte[]{ 0x00, 0x00 };

        public BikeNotification(string name, byte[] id) {
            this.name = name;
            this.id = id;
        }

        public bool dataIsNotification(byte[] data) {
            return data[0] == id[0] && data[1] == id[1];
        }

        public override string ToString() {
            return name + BitConverter.ToString(id).Replace("-", " ");
        }
    }

    public List<BikeNotification> watchedNotifications = new List<BikeNotification> {
        new BikeNotification("MOTION", MOTION_ID),
        new BikeNotification("TOTAL", TOTAL_ID),
        new BikeNotification("RIDE", RIDE_ID),
        new BikeNotification("SETTINGS", SETTINGS_ID),
        new BikeNotification("POWER", POWER_ID),
        new BikeNotification("MYSTERY", MYSTERY_ID),
        new BikeNotification("UNKNOWN1", new byte[]{0x00, 0x01}),
        new BikeNotification("UNKNOWN2", new byte[]{0x00, 0x02}),
        new BikeNotification("UNKNOWN3", new byte[]{0x00, 0x03}),
        new BikeNotification("UNKNOWN4", new byte[]{0x00, 0x04}),
        new BikeNotification("UNKNOWN5", new byte[]{0x00, 0x05}),
        new BikeNotification("UNKNOWN6", new byte[]{0x00, 0x06}),
    };

    public AnimationCurve dischargeCurve;
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
    [Space]
    public GameObject walkGraphic;
    public GameObject limpGraphic;
    public GameObject brakesGraphic;
    public GameObject indicatorsSideBar;
    [Space]
    public HoldButton modeButton;
    public TMP_Text modeText;
    public TMP_Text modeDescriptorNameText;
    public TMP_Text modeDescriptorSpeedText;
    public TMP_Text modeDescriptorPowerText;
    public TMP_Text modeDescriptorThrottleText;
    [Space]
    public TMP_Text speedText;
    public TMP_Text speedUnitsText;
    public Button assistButton;
    public TMP_Text assistText;
    [Space]
    public Toggle batteryToggle;
    public Image levelGraphic;
    public TMP_Text levelText;
    public TMP_Text rangeText;
    public TMP_Text rangeUnitsText;
    public TMP_Text voltText;
    public TMP_Text ampText;
    [Space]
    public Button lightButton;
    public Image lightGraphic;
    public Button unitsButton;
    public Button prefsButton;
    public Button themeButton;
    [Space]
    public TMP_Text wheelRPMText;
    public TMP_Text pedalRPMText;
    public TMP_Text totalText;
    public TMP_Text totalUnitsText;
    [Space]
    public Toggle autoApplyToggle;
    public Toggle autoConnectToggle;
    public Button bikeButton;
    public Toggle debugToggle;
    public Toggle deviceThemeToggle;
    [Space]
    public TMP_Text deviceNameText;
    public TMP_Text manufacturerNameText;
    public TMP_Text softwareVersionText;
    public TMP_Text hardwareVersionText;
    [Space]
    [Header("Debug")]
    public List<GameObject> debugLines;
    public TMP_Text notifText;
    public GameObject prefsOverlay;
    [Space]
    [Header("Loading")]
    public GameObject loadingOverlay;
    [Space]
    [Header("Resources")]
    public Sprite lightOn;
    public Sprite lightOff;
    public List<Sprite> batteryLevels;
    public Sprite batteryCharging;


    Dictionary<BikeNotification, string> debugNotifValues = new Dictionary<BikeNotification, string>();

    

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
        if (!PlayerPrefs.HasKey("CELL_S_COUNT")) PlayerPrefs.SetFloat("CELL_S_COUNT", CELL_S_COUNT);
        if (!PlayerPrefs.HasKey("BASE_MAX_RANGE_KM")) PlayerPrefs.SetFloat("BASE_MAX_RANGE_KM", BASE_MAX_RANGE_KM);
        if (!PlayerPrefs.HasKey("REAL_MAX_RANGE_KM")) PlayerPrefs.SetFloat("REAL_MAX_RANGE_KM", REAL_MAX_RANGE_KM);
        if (!PlayerPrefs.HasKey("CHARGE_CURRENT_THRESHOLD")) PlayerPrefs.SetFloat("CHARGE_CURRENT_THRESHOLD", CHARGE_CURRENT_THRESHOLD);

    }

    private void OnEnable() {
        NativeBLE.onScanResult += this.onScanResult;
        NativeBLE.onConnected += this.onConnected;
        NativeBLE.onDisconnected += this.onDisconnected;
        NativeBLE.onservicesDiscovered += this.onServicesDiscovered;
        NativeBLE.onCharacteristicRead += this.onCharacteristicRead;
        NativeBLE.onCharacteristicWrite += this.onCharacteristicWrite;
        NativeBLE.onCharacteristicChanged += this.onCharacteristicRead;
        NativeBLE.onCharacteristicWrite += this.onWrite;
    }

    private void Start() {
        StartCoroutine(setThemeRoutine());

        scanPage.SetActive(true);
        connectPage.SetActive(false);
        prefsOverlay.SetActive(false);
        loadingOverlay.SetActive(false);

        currentBikeState = gameObject.AddComponent<BikeState>();
        refreshDisplay(currentBikeState);

        batteryToggle.isOn = PlayerPrefs.GetInt("batteryLevel", 1) == 1;
        levelText.gameObject.SetActive(batteryToggle.isOn);
        voltText.gameObject.SetActive(!batteryToggle.isOn);
        rangeText.gameObject.SetActive(batteryToggle.isOn);
        ampText.gameObject.SetActive(!batteryToggle.isOn);
        batteryToggle.onValueChanged.AddListener(delegate {
            PlayerPrefs.SetInt("batteryLevel", batteryToggle.isOn ? 1 : 0);
            levelText.gameObject.SetActive(batteryToggle.isOn);
            voltText.gameObject.SetActive(!batteryToggle.isOn);
            rangeText.gameObject.SetActive(batteryToggle.isOn);
            ampText.gameObject.SetActive(!batteryToggle.isOn);
        });

        deviceThemeToggle.isOn = PlayerPrefs.GetInt("deviceTheme", 1) == 1;
        deviceThemeToggle.onValueChanged.AddListener(delegate {
            PlayerPrefs.SetInt("deviceTheme", deviceThemeToggle.isOn ? 1 : 0);
            StartCoroutine(setThemeRoutine());
            if (deviceThemeToggle.isOn) NativeBLE.doToast("Using device theme");
            else NativeBLE.doToast("Using last selected theme");
        });

        themeButton.onClick.AddListener(delegate {
            if (ColorManager.instance.theme == ColorManager.instance.darkTheme) {
                ColorManager.instance.setTheme(ColorManager.instance.lightTheme);
                PlayerPrefs.SetString("theme", DeviceTheme.LIGHT.ToString());
            } else {
                ColorManager.instance.setTheme(ColorManager.instance.darkTheme);
                PlayerPrefs.SetString("theme", DeviceTheme.DARK.ToString());
            }
        });

        debugToggle.isOn = PlayerPrefs.GetInt("debug", 0) == 1;
        foreach (GameObject line in debugLines) line.SetActive(debugToggle.isOn);
        debugToggle.onValueChanged.AddListener(delegate {
            PlayerPrefs.SetInt("debug", debugToggle.isOn ? 1 : 0);
            foreach (GameObject line in debugLines) line.SetActive(debugToggle.isOn);
            if(debugToggle.isOn) NativeBLE.doToast("Showing debug info");
            else NativeBLE.doToast("Debug info hidden");
        });
        //
        scanButton.onClick.AddListener(delegate {
            scan();
        });
        //
        modeButton.onHold += delegate {
            modeText.text = currentBikeState.setMode(4).ToString();
            applySettings();
        };
        modeButton.onClick += delegate {
            modeText.text = currentBikeState.changeMode().ToString();
            applySettings();
        };
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
            if (autoApplyToggle.isOn) NativeBLE.doToast("App settings apply on connect");
            else NativeBLE.doToast("Bike settings loaded on connect");
        });
        unitsButton.onClick.AddListener(delegate {
            currentBikeState.toggleMetric();
            refreshDisplay(currentBikeState);
            if (!currentBikeState.getMetric()) NativeBLE.doToast("Freedom units!");
            else NativeBLE.doToast("Bigger numbers!");
        });
        prefsButton.onClick.AddListener(delegate {
            prefsOverlay.SetActive(true);
        });
        

        scan();
    }


    IEnumerator setThemeRoutine() {
        yield return new WaitForEndOfFrame();
        if (PlayerPrefs.HasKey("theme") && PlayerPrefs.GetInt("deviceTheme", 1) == 0) {
            if (PlayerPrefs.GetString("theme", "") == DeviceTheme.DARK.ToString()) ColorManager.instance.setTheme(ColorManager.instance.darkTheme);
            else ColorManager.instance.setTheme(ColorManager.instance.lightTheme);
        } else {
            if (NativeBLE.androidTheme == DeviceTheme.DARK) ColorManager.instance.setTheme(ColorManager.instance.darkTheme);
            else ColorManager.instance.setTheme(ColorManager.instance.lightTheme);
        }
    }

    void refreshDisplay(BikeState state) {

        if(modeText!= null) modeText.text = state.getMode().ToString();
        if (modeDescriptorNameText != null) modeDescriptorNameText.text = state.getModeDescriptorName();
        if (modeDescriptorSpeedText != null) modeDescriptorSpeedText.text = state.getModeDescriptorSpeedReadable();
        if (modeDescriptorPowerText != null) modeDescriptorPowerText.text = state.getModeDescriptorPowerReadable();
        if (modeDescriptorThrottleText != null) modeDescriptorThrottleText.text = state.getModeDescriptorThrottleReadable();

        if (assistText != null) assistText.text = state.getAssist().ToString();
        if (lightGraphic != null) lightGraphic.sprite = state.getLight() ? lightOn : lightOff;

        if (walkGraphic != null) walkGraphic.SetActive(state.getWalk());
        if (limpGraphic != null) limpGraphic.SetActive(state.getLimp());
        if (brakesGraphic != null) brakesGraphic.SetActive(state.getBrakes());


        if (speedText != null) speedText.text = state.getReadableWheelSpeed();
        if (speedUnitsText != null) speedUnitsText.text = state.getMetric() ? "kmh" : "mph";

        if (rangeText != null) rangeText.text = state.getReadableRange();
        if (rangeUnitsText != null) rangeUnitsText.text = state.getMetric() ? "km" : "mi";

        if (levelText != null) levelText.text = state.getReadableBatteryLevel();
        if (levelGraphic != null) {
            if (state.getCharging()) levelGraphic.sprite = batteryCharging;
            else levelGraphic.sprite = batteryLevels[Mathf.RoundToInt(Mathf.Lerp(0, 4, state.getBatteryLevel() ))];
        }
        if (voltText != null) voltText.text = state.getReadableBatteryVolt();
        if (ampText != null) ampText.text = state.getReadableBatteryChargeCurrent();

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
                NativeBLE.doToast("Will connect to bike automatically");
            } else {
                ConnectedDevice connectedDevice = NativeBLE.getConnectedDevice();
                if (connectedDevice != null && PlayerPrefs.HasKey(connectedDevice.deviceInfo.address)) PlayerPrefs.DeleteKey(connectedDevice.deviceInfo.address);
                NativeBLE.doToast("Won't connect automatically");
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
        yield return new WaitUntil(() => readAvailable);
        registerMystery();    

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

    /*public void tryApplySettings(byte id) {
        byte[] data = new byte[] { 0x00, id, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
        Debug.Log(id + " : " + NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER, data));
    }
    */

    void onWrite(string s) {
        
    }

    //Notifications
    public void subscribeNotifications(bool subscribe) {
        NativeBLE.subscribeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_NOTIFIER, subscribe);
    }

    //Register

    void registerCustom(byte[] id) {
        readAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, id);
        Debug.Log("Registering: " + BitConverter.ToString(id).Replace("-", " "));
    }

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
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, RIDE_ID);
        Debug.Log("Registering total");
    }

    void registerPower() {
        readAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, POWER_ID);
        Debug.Log("Registering total");
    }

    void registerSpeed() {
        readAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, MOTION_ID);
        Debug.Log("Registering total");
    }

    void registerMystery() {
        readAvailable = false;
        NativeBLE.writeCharacteristic(UUID_METRICS_SERVICE, UUID_METRICS_CHARACTERISTIC_REGISTER_ID, MYSTERY_ID);
        Debug.Log("Registering mystery");
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
            s += "%%% " + BitConverter.ToString(data).Replace("-", " ");
            Debug.Log(s);
        }
    }


    void updateNotificationDebug(byte[] data) {
        string debugString = BitConverter.ToString(data).Replace("-", " ");

        string finalText = "";
        bool identified = false;
        foreach (BikeNotification bn in watchedNotifications) {
            if (!identified && bn.dataIsNotification(data)) {
                if (debugNotifValues.ContainsKey(bn)) debugNotifValues[bn] = debugString;
                else debugNotifValues.Add(bn, debugString);
                identified = true;
            }
            if (debugNotifValues.ContainsKey(bn)) finalText += debugNotifValues[bn];
            else finalText +=  BitConverter.ToString(bn.id).Replace("-", " ") + " -- -- -- -- -- -- -- --";
            finalText += " " + bn.name + "\n";
        }
        if (!identified) {
            watchedNotifications.Add(new BikeNotification("UNEXPECTED", new byte[] { data[0], data[1] }));
            debugNotifValues.Add(watchedNotifications[watchedNotifications.Count - 1], debugString);
        }

        notifText.text = finalText;
    }

    


    #endregion



}

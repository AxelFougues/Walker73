using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class BikeState : MonoBehaviour {
    public static List<string> modeDescriptorsName = new List<string> {
        "US CLASS1",
        "US CLASS2",
        "US CLASS3",
        "US OFF-ROAD",
        "EU EPAC",
        "EU MID",
        "EU HIGH",
        "EU OFF-ROAD",
    };

    public static List<float> modeDescriptorsSpeed = new List<float> {
        32.2f,
        32.2f,
        45f,
        -1,
        25f,
        35f,
        45f,
        -1f
    };

    public static List<float> modeDescriptorsSpeedImperial = new List<float> {
        20f,
        20f,
        28f,
        -1f,
        15.5f,
        22f,
        28f,
        -1f
    };

    public static List<int> modeDescriptorsPower = new List<int> {
        750,
        750,
        750,
        -1,
        250,
        250,
        850,
        -1
    };

    public static List<bool> modeDescriptorsThrottle = new List<bool> {
        false,
        true,
        false,
        true,
        false,
        false,
        false,
        true
    };

    public const int MAX_MODE = 7;
    public const int MAX_ASSIST = 4;

    //settings
    bool metric = true;
    int mode;
    int assist;
    bool walk;
    bool light;

    //metrics
    double wheelSpeed = 0f;
    double wheelRPM = 0f;

    float total = 0;

    double pedalRPM = 0f;

    ushort rawRange = 0;
    float batteryLevel = 100;
    float batteryVolt = 0;
    float batteryChargeCurrent = 0;
    float range = 0;

    //device
    string deviceName = "N/A";
    string manufacturerName = "N/A";
    string softwareVersion = "N/A";
    string hardwareVersion = "N/A";



    private void Awake() {
        mode = PlayerPrefs.GetInt("mode", 3);
        assist = PlayerPrefs.GetInt("assist", 3);
        light = PlayerPrefs.GetInt("light", 0) == 1;
        metric = PlayerPrefs.GetInt("metric", 0) == 1;
    }

    //SETTINGS

    public string getDeviceName() => deviceName;
    public string getManufaturerName() => manufacturerName;
    public string getHardwareVersion() => hardwareVersion;
    public string getSoftwareVersion() => softwareVersion;
    public int getMode() => mode;
    public int getAssist() => assist;
    public bool getLight() => light;
    public bool getWalk() => walk;
    public float getBatteryLevel() => batteryLevel;
    public float getBatteryVolt() => batteryVolt;
    public float getBatteryChargeCurrent() => batteryChargeCurrent;
    public bool getMetric() => metric;
    public string getModeDescriptorName() {return modeDescriptorsName[mode];}
    public float getModeDescriptorSpeed() { if (metric) return modeDescriptorsSpeed[mode]; else return modeDescriptorsSpeedImperial[mode]; }
    public string getModeDescriptorSpeedReadable() { float speed = getModeDescriptorSpeed(); if (speed >= 0) { if (metric) return getModeDescriptorSpeed() + "km/h"; else return getModeDescriptorSpeed() + "mph"; } else return "MAX"; }
    public int getModeDescriptorPower() { return modeDescriptorsPower[mode]; }
    public string getModeDescriptorPowerReadable() { int power = getModeDescriptorPower(); return power>=0? power + "W": "MAX"; }
    public bool getModeDescriptorThrottle() { return modeDescriptorsThrottle[mode]; }
    public string getModeDescriptorThrottleReadable() { return getModeDescriptorThrottle()? "ENABLED": "DISABLED"; }

    public int changeMode(bool save = true) {
        mode++;
        if (mode > MAX_MODE) mode = 0;
        if (save) PlayerPrefs.SetInt("mode", mode);
        return mode;
    }

    public int changeAssist(bool save = true) {
        assist++;
        if (assist > MAX_ASSIST) assist = 0;
        if (save) PlayerPrefs.SetInt("assist", assist);
        return assist;
    }

    public bool setLight(bool value, bool save = true) {
        light = value;
        if (save) PlayerPrefs.SetInt("light", light ? 1 : 0);
        return light;
    }

    public bool toggleLight(bool save = true) {
        light = !light;
        if (save) PlayerPrefs.SetInt("light", light ? 1 : 0);
        return light;
    }

    public bool toggleMetric(bool save = true) {
        metric = !metric;
        if (save) PlayerPrefs.SetInt("metric", metric ? 1 : 0);
        return metric;
    }

    public void setDeviceName(string deviceName) {
        this.deviceName = deviceName;
    }

    public void setManufacturerName(string manufacturerName) {
        this.manufacturerName = manufacturerName;
    }

    public void setSoftwareVersion(string softwareVesrion) {
        this.softwareVersion = softwareVesrion;
    }

    public void setHardwareVersion(string hardwareVersion) {
        this.hardwareVersion = hardwareVersion;
    }

    public byte[] getData() {
        byte lightData = 0x00;
        if (light) lightData = 0x01;
        return new byte[] { 0x00, 0xD1, lightData, (byte)assist, (byte)mode, 0x00, 0x00, 0x00, 0x00, 0x00 };
    }

    //WHEEL

    public double getWheelSpeed() {
        if (metric) return wheelSpeed;
        else return wheelSpeed * 0.621371f;
    }

    public string getReadableWheelSpeed() {
        return getWheelSpeed().ToString("0.0");
    }

    public double getWheelRPM() {
        return wheelRPM;
    }

    public string getReadableWheelRPM() {
        return getWheelRPM().ToString("0.0");
    }

    //TOTAL

    public float getTotal() {
        if (metric) return total;
        else return total * 0.621371f;
    }

    public string getReadableTotal() {
        return Mathf.RoundToInt(getTotal()).ToString();
    }

    //PEDAL

    public double getPedalRPM() {
        return pedalRPM;
    }

    public string getReadablePedalRPM() {
        return getPedalRPM().ToString("0.0");
    }

    //RANGE

    public string getReadableBatteryVolt() {
        return getBatteryVolt().ToString(); //getBatteryVolt().ToString("0.0");
    }

    public string getReadableBatteryChargeCurrent() {
        return getBatteryChargeCurrent().ToString("0.000");
    }

    public string getReadableBatteryLevel() {
        return Mathf.RoundToInt(getBatteryLevel()).ToString();
    }

    public bool getCharging() {
        return batteryChargeCurrent > 0.1f;
    }

    public float getRange() {
        if (metric) return range;
        else return range * 0.621371f;
    }

    public string getReadableRange() {
        return getRange().ToString("0.0");
    }

    public bool getLimp() {
        return false;
        return batteryVolt < 41f;
    }

    public bool getBrakes() {
        return false; //Temporary block until value is found
        return wheelSpeed < 1f;
    }

    //DATA RECEIVE

    public bool processData(byte[] data) {
        if (data == null || data.Length != 10) return false;

        if (dataIsId(data, BikeManager.SETTINGS_ID)) return processSettingsData(data);
        else if (dataIsId(data, BikeManager.MOTION_ID)) return processMotionData(data);
        else if (dataIsId(data, BikeManager.TOTAL_ID)) return processTotalData(data);
        else if (dataIsId(data, BikeManager.RIDE_ID)) return processRideData(data);
        else if (dataIsId(data, BikeManager.POWER_ID)) return processPowerData(data);

        return false;
    }


    bool processSettingsData(byte[] data) {
        string s = "";
        foreach (byte b in data) s += (int)b + " ";
        Debug.Log(s);
        //if (data[4] > 0x01) return false;
        //if (data[2] > 0x04) return false;
        //if (data[5] > 0x07) return false;
        walk = data[3] == 0x00;
        light = data[4] == 0x01;
        assist = data[2];
        mode = data[5];
        return true;
    }

    bool processMotionData(byte[] data) {
        wheelSpeed = BitConverter.ToUInt16(new byte[] { data[2], data[3] }) / 100;
        wheelRPMFromSpeed();
        return true;
    }

    bool processTotalData(byte[] data) {
        total = BitConverter.ToUInt16(new byte[] { data[6], data[7] }) / 10f;
        return true;
    }

    bool processRideData(byte[] data) {
        pedalRPM = 0.2189381 * BitConverter.ToUInt16(new byte[] { data[2], data[3] });
        rawRange = BitConverter.ToUInt16(new byte[] { data[8], data[9] });
        rangeFromRawRange();
        batteryLevelFromRawRange();

        return true;
    }

    bool processPowerData(byte[] data) {
        batteryVolt = ((float)data[2] + (float)data[3] * 256f); //BitConverter.ToUInt16(new byte[] { data[2], data[3] });
        batteryChargeCurrent = BitConverter.ToUInt16(new byte[] { data[6], data[7] }) / 1000f;
        return false;
    }

    void wheelRPMFromSpeed() {
        wheelRPM =  wheelSpeed/PlayerPrefs.GetFloat("WHEEL_DIAMETRER_M") /0.1885f;
    }

    void rangeFromRawRange() {
        float clampedRaw = Mathf.Clamp(rawRange, 0f, PlayerPrefs.GetFloat("BASE_MAX_RANGE_KM"));
        range = (clampedRaw / PlayerPrefs.GetFloat("BASE_MAX_RANGE_KM")) * PlayerPrefs.GetFloat("REAL_MAX_RANGE_KM");
    }

    void batteryLevelFromRawRange() {
        batteryLevel = (rawRange / PlayerPrefs.GetFloat("BASE_MAX_RANGE_KM")) * 100f;
    }


    //OTHER

    public bool dataIsId(byte[] data, byte[] id) {
        return data[0] == id[0] && data[1] == id[1];
    }

    public override bool Equals(object obj) {
        var state = obj as BikeState;
        return state != null &&
               mode == state.mode &&
               assist == state.assist &&
               light == state.light;
    }

    public override string ToString() {
        return "State: M" + mode + " A" + assist + " L" + (light ? 1 : 0);
    }
}

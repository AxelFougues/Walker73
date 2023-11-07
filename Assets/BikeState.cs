using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class BikeState : MonoBehaviour {
    public static List<string> modeDescriptorsName = new List<string> {
        "US-CLASS1",
        "US-CLASS2",
        "US-CLASS3",
        "US-OFF-ROAD",
        "EU-EPAC",
        "EU-MID",
        "EU-HIGH",
        "EU-OFF-ROAD",
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

    //settings
    bool metric = true;
    int mode;
    int assist;
    bool light;

    //metrics
    double wheelSpeed = 0f;
    double wheelRPM = 0f;
    ushort rawWheel = 0;

    float total = 0;

    double pedalRPM = 0f;
    ushort rawPedal = 0;

    ushort rawRange = 0;
    float batteryLevel = 0;
    float range = 0;
    float voltage = 0;

    private void Awake() {
        mode = PlayerPrefs.GetInt("mode", 3);
        assist = PlayerPrefs.GetInt("assist", 3);
        light = PlayerPrefs.GetInt("light", 0) == 1;
        metric = PlayerPrefs.GetInt("metric", 0) == 1;
    }


    //SETTINGS

    public int getMode() => mode;
    public int getAssist() => assist;
    public bool getLight() => light;
    public float getBatteryLevel() => batteryLevel;
    public float getVoltage() => voltage;
    public bool getMetric() => metric;
    public string getModeDescriptorName() {return modeDescriptorsName[mode];}
    public float getModeDescriptorSpeed() { if (metric) return modeDescriptorsSpeed[mode]; else return modeDescriptorsSpeedImperial[mode]; }
    public string getModeDescriptorSpeedReadable() { if (metric) return getModeDescriptorSpeed() + "km/h"; else return getModeDescriptorSpeed() + "mph"; }
    public int getModeDescriptorPower() { return modeDescriptorsPower[mode]; }
    public string getModeDescriptorPowerReadable() { return getModeDescriptorPower() + "W"; }
    public bool getModeDescriptorThrottle() { return modeDescriptorsThrottle[mode]; }
    public string getModeDescriptorThrottleReadable() { return getModeDescriptorThrottle()? "ENABLED": "DISABLED"; }

    public int changeMode(bool save = true) {
        mode++;
        if (mode > 8) mode = 0;
        if (save) PlayerPrefs.SetInt("mode", mode);
        return mode;
    }

    public int changeAssist(bool save = true) {
        assist++;
        if (assist > 5) assist = 0;
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

    public string getReadableBatteryLevel() {
        return Mathf.RoundToInt(getBatteryLevel()).ToString();
    }

    public float getRange() {
        if (metric) return range;
        else return range * 0.621371f;
    }

    public string getReadableRange() {
        return getRange().ToString("0.0");
    }

    public string getReadableVoltage() {
        return getVoltage().ToString("0.0");
    }

    //DATA RECEIVE

    public bool processData(byte[] data) {
        if (data == null || data.Length != 10) return false;

        if (dataIsId(data, BikeManager.SETTINGS_ID)) return processSettingsData(data);
        else if (dataIsId(data, BikeManager.SPEED_ID)) return processWheelData(data);
        else if (dataIsId(data, BikeManager.TOTAL_ID)) return processTotalData(data);
        else if (dataIsId(data, BikeManager.PEDAL_ID)) return processPedalData(data);
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
        light = data[4] == 0x01;
        assist = data[2];
        mode = data[5];
        return true;
    }

    bool processWheelData(byte[] data) {
        rawWheel = BitConverter.ToUInt16(new byte[] { data[2], data[3] });
        wheelSpeedFromRaw();
        wheelRPMFromSpeed();
        return true;
    }

    bool processTotalData(byte[] data) {
        total = BitConverter.ToUInt16(new byte[] { data[6], data[7] }) / 10;
        return true;
    }

    bool processPedalData(byte[] data) {
        rawPedal = BitConverter.ToUInt16(new byte[] { data[2], data[3] });
        pedalRPMFromRawPower();
        rawRange = BitConverter.ToUInt16(new byte[] { data[8], data[9] });
        rangeFromBatteryLevel();
        batteryLevelFromRawRange();
        voltageFromBatteryLevel();

        return true;
    }

    bool processPowerData(byte[] data) {
        return false;
    }


    void wheelSpeedFromRaw() {
        wheelSpeed = 0.01963741 * Mathf.Pow(rawWheel, 0.9211116f);
    }

    void wheelRPMFromSpeed() {
        wheelRPM =  wheelSpeed/PlayerPrefs.GetFloat("WHEEL_DIAMETRER_M") /0.1885f;
    }

    void pedalRPMFromRaw() {
        pedalRPM = 0.01926005 * rawPedal + 1.051926;
    }

    void pedalRPMFromRawPower() {
        pedalRPM = 0.2189381 * Mathf.Pow(rawPedal, 0.02422947f);
    }

    void rangeFromBatteryLevel() {
        range = (rawRange / PlayerPrefs.GetFloat("BASE_TOTAL_RANGE_KM")) * PlayerPrefs.GetFloat("REAL_TOTAL_RANGE_KM");
    }

    void batteryLevelFromRawRange() {
        batteryLevel = (rawRange / PlayerPrefs.GetFloat("BASE_MAX_RANGE_KM")) * 100f;
    }

    void voltageFromBatteryLevel() {
        voltage = BikeManager.instance.li_ionDischargeCurve.Evaluate(batteryLevel); //Mathf.Lerp(BikeManager.MIN_VOLTAGE_V, BikeManager.MAX_VOLTAGE_V, batteryLevel / 100f);
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

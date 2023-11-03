using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class BikeState : MonoBehaviour {
    public static List<string> modeDescriptors = new List<string> {
        "25km/h - 250W",
        "35km/h - 250W",
        "45km/h - 850W",
        "50km/h - 1200W",
        "EU default"
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
    public bool getMetric() => metric;
    public string getModeDescriptor() { return modeDescriptors[mode]; }

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
        Debug.Log("##");
        string s = "";
        foreach (byte b in data) s += (int)b + " ";
        Debug.Log(s);
        //if (data[4] > 0x01) return false;
        //if (data[2] > 0x04) return false;
        //if (data[5] > 0x07) return false;
        light = data[4] == 0x01;
        assist = data[2];
        mode = data[5];
        Debug.Log("###");
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
        return true;
    }

    bool processPowerData(byte[] data) {
        return false;
    }


    void wheelSpeedFromRawPower() {
        wheelSpeed = 0;
    }

    void wheelSpeedFromRaw() {
        wheelSpeed = 0.01963741 * Mathf.Pow(rawWheel, 0.9211116f);
    }

    void wheelRPMFromSpeed() {
        wheelRPM =  wheelSpeed/PlayerPrefs.GetFloat("WHEEL_DIAMETRER_M", BikeManager.WHEEL_DIAMETRER_M) /0.1885f;
    }

    void pedalRPMFromRaw() {
        pedalRPM = 0.01926005 * rawPedal + 1.051926;
    }

    void pedalRPMFromRawPower() {
        pedalRPM = 0.2189381 * Mathf.Pow(rawPedal, 0.02422947f);
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

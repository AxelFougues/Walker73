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
        "50km/h - 1200W"
    };

    public static float PEDAL_DIAMETRER_M = 0.125f;
    public static float WHEEL_DIAMETRER_M = 0.57f;

    //settings
    bool metric = true;
    int mode;
    int assist;
    bool light;

    //metrics
    double wheelSpeed = 0f;
    double wheelRPM = 0f;
    ushort rawWheel = 0;

    int total = 0;

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
    public string getModeDescriptor() { return modeDescriptors[mode]; }

    public int changeMode(bool save = true) {
        mode++;
        if (mode > 3) mode = 0;
        if (save) PlayerPrefs.SetInt("mode", mode);
        return mode;
    }

    public int changeAssist(bool save = true) {
        assist++;
        if (assist > 4) assist = 0;
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

    public bool setMetric(bool value, bool save = true) {
        metric = value;
        if (save) PlayerPrefs.SetInt("metric", metric ? 1 : 0);
        return metric;
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
        return wheelSpeed;
    }

    public string getReadableWheelSpeed() {
        return wheelSpeed.ToString("0.0");
    }

    public double getWheelRPM() {
        return wheelRPM;
    }

    public string getReadableWheelRPM() {
        return wheelRPM.ToString("0.0");
    }

    //TOTAL

    public int getTotal() {
        return total;
    }

    //PEDAL

    public double getPedalRPM() {
        return pedalRPM;
    }

    public string getReadablePedalRPM() {
        return pedalRPM.ToString("0.0");
    }


    //DATA RECEIVE

    public bool processData(byte[] data) {
        if (data == null || data.Length != 10) return false;

        if (dataIsId(data, BikeManager.SETTINGS_ID)) processSettingsData(data);
        else if (dataIsId(data, BikeManager.SPEED_ID)) processWheelData(data);
        else if (dataIsId(data, BikeManager.TOTAL_ID)) processTotalData(data);
        else if (dataIsId(data, BikeManager.PEDAL_ID)) processPedalData(data);
        else if (dataIsId(data, BikeManager.MOTOR_ID)) processMotorData(data);

        return false;
    }


    bool processSettingsData(byte[] data) {
        if (data[4] > 0x01) return false;
        if (data[2] > 0x04) return false;
        if (data[5] > 0x03) return false;
        light = data[4] == 0x01;
        assist = data[2];
        mode = data[5];
        return true;
    }

    bool processWheelData(byte[] data) {
        if (data[1] == 0x01) { //wheel spin

            rawWheel = BitConverter.ToUInt16(new byte[] { data[2], data[3] });
            wheelSpeedFromRaw();
            wheelRPMFromSpeed();
            return true;

        } else if (data[1] == 0x02) {// distance

            total = BitConverter.ToUInt16(new byte[] { data[6], data[7] }) / 10;

        } else if (data[1] == 0x03) {//pedal

            rawPedal = BitConverter.ToUInt16(new byte[] { data[2], data[3] });
            pedalRPMFromRaw();

        }
        return false;
    }

    bool processTotalData(byte[] data) {
        total = BitConverter.ToUInt16(new byte[] { data[6], data[7] }) / 10;
        return true;
    }

    bool processPedalData(byte[] data) {
        rawPedal = BitConverter.ToUInt16(new byte[] { data[2], data[3] });
        pedalRPMFromRaw();
        return true;
    }

    bool processMotorData(byte[] data) {
        return false;
    }



    void wheelSpeedFromRaw() {
        wheelSpeed = 0.009876614 * rawWheel + 1.228228;
    }

    void wheelRPMFromSpeed() {
        wheelRPM =  wheelSpeed/WHEEL_DIAMETRER_M/0.1885f;
    }

    void pedalRPMFromRaw() {
        pedalRPM = 0.01926005 * rawPedal + 1.051926;
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

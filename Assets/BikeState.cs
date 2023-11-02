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

    //settings
    bool metric = true;
    int mode;
    int assist;
    bool light;
    //metrics
    double speed = 0f;
    ushort rawSpeed = 0;

    private void Awake() {
        mode = PlayerPrefs.GetInt("mode", 3);
        assist = PlayerPrefs.GetInt("assist", 3);
        light = PlayerPrefs.GetInt("light", 0) == 1;
        metric = PlayerPrefs.GetInt("metric", 0) == 1;
    }

    public int getMode() => mode;
    public int getAssist() => assist;
    public bool getLight() => light;
    public string getModeDescriptor() { return modeDescriptors[mode]; }

    public int setMode(int value, bool save = true) {
        value = Mathf.Clamp(value, 0, 3);
        mode = value;
        if (save) PlayerPrefs.SetInt("mode", mode);
        return mode;
    }

    public int changeMode(bool save = true) {
        mode++;
        if (mode > 3) mode = 0;
        if (save) PlayerPrefs.SetInt("mode", mode);
        return mode;
    }

    public int setAssist(int value, bool save = true) {
        value = Mathf.Clamp(value, 0, 3);
        assist = value;
        if (save) PlayerPrefs.SetInt("assist", assist);
        return assist;
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

    public double getSpeed() {
        return speed;
    }

    public string getReadableSpeed() {
        return speed.ToString("0.0");
    }

    public ushort getRawSpeed() {
        return rawSpeed;
    }





    public bool setData(byte[] data) {
        if (data == null || data.Length != 10) return false;
        if (data[0] == 0x02) return processMovementData(data);
        else if (data[0] == 0x03) return processSettingsData(data);
        else if (data[0] == 0x04) return processMotorData(data);
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

    bool processMovementData(byte[] data) {
        if (data[1] == 0x01) { //wheel spin

            rawSpeed = BitConverter.ToUInt16(new byte[] { data[2], data[3] });
            speedFromLinear(rawSpeed);
            return true;

        } else if (data[1] == 0x02) {// power?

        } else if (data[1] == 0x03) {//pedal
            
        }
        return false;
    }

    bool processMotorData(byte[] data) {
        return false;
    }

    void speedFromLinear(float x) {
        speed = 0.009876614 * x + 1.228228;
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

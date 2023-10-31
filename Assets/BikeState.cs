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

    bool metric = true;
    int mode;
    int assist;
    bool light;

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

    public override bool Equals(object obj) {
        var state = obj as BikeState;
        return state != null &&
               mode == state.mode &&
               assist == state.assist &&
               light == state.light;
    }

    public bool setData(byte[] data) {
        if (data == null || data.Length != 10 || data[0] != 0x00 || data[1] != 0x03) return false;
        if (data[2] > 0x01) return false;
        if (data[3] > 0x04) return false;
        if (data[4] > 0x03) return false;
        light = data[2] == 0x01;
        assist = data[3];
        mode = data[4];
        return true;
    }

    public byte[] getData() {
        byte lightData = 0x00;
        if (light) lightData = 0x01;
        return new byte[] { 0x00, 0xD1, lightData, (byte)assist, (byte)mode, 0x00, 0x00, 0x00, 0x00, 0x00 };
    }

    public override string ToString() {
        return "State: M" + mode + " A" + assist + " L" + (light ? 1 : 0);
    }
}

using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static NativeBLE;

public class DeviceLine : MonoBehaviour{

    public Button button;

    public TMP_Text text;

    BtleDevice device;

    public void set(BtleDevice device) {
        this.device = device;
        text.text = device.name + " - " + device.address;
        button.onClick.AddListener(delegate {
            BikeManager.instance.connect(device);
        });
    }

}

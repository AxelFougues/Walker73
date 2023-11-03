using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static NativeBLE;

public class DeviceLine : MonoBehaviour{

    public Button button;

    public TMP_Text label;
    public TMP_Text address;

    BtleDevice device;

    public void set(BtleDevice device) {
        this.device = device;
        label.text = device.name;
        address.text = device.address;
        button.onClick.AddListener(delegate {
            BikeManager.instance.connect(device);
        });
    }

}

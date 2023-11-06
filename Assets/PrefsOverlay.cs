using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PrefsOverlay : MonoBehaviour{
    public TMP_InputField wheelDiam;
    public TMP_InputField maxVoltage;
    public TMP_InputField minVoltage;
    public TMP_InputField totalRange;
    [Space]
    public Button closeButton;

    private void Start() {
        closeButton.onClick.AddListener(delegate {
            gameObject.SetActive(false);
        });

        wheelDiam.text = PlayerPrefs.GetFloat("WHEEL_DIAMETRER_M", BikeManager.WHEEL_DIAMETRER_M).ToString();
        wheelDiam.onValueChanged.AddListener(delegate {
            float newDiam = -1;
            if (float.TryParse(wheelDiam.text, out newDiam) && newDiam > 0) {
                PlayerPrefs.SetFloat("WHEEL_DIAMETRER_M", newDiam);
            } else {
                PlayerPrefs.SetFloat("WHEEL_DIAMETRER_M", BikeManager.WHEEL_DIAMETRER_M);
                wheelDiam.text = PlayerPrefs.GetFloat("WHEEL_DIAMETRER_M", BikeManager.WHEEL_DIAMETRER_M).ToString();
            }
        });

        maxVoltage.text = PlayerPrefs.GetFloat("MAX_VOLTAGE_V", BikeManager.MAX_VOLTAGE_V).ToString();
        maxVoltage.onValueChanged.AddListener(delegate {
            float newMax = -1;
            if (float.TryParse(maxVoltage.text, out newMax) && newMax > 0) {
                PlayerPrefs.SetFloat("MAX_VOLTAGE_V", newMax);
            } else {
                PlayerPrefs.SetFloat("MAX_VOLTAGE_V", BikeManager.MAX_VOLTAGE_V);
                maxVoltage.text = PlayerPrefs.GetFloat("MAX_VOLTAGE_V", BikeManager.MAX_VOLTAGE_V).ToString();
            }
        });

        minVoltage.text = PlayerPrefs.GetFloat("MIN_VOLTAGE_V", BikeManager.MIN_VOLTAGE_V).ToString();
        minVoltage.onValueChanged.AddListener(delegate {
            float newMin = -1;
            if (float.TryParse(minVoltage.text, out newMin) && newMin > 0) {
                PlayerPrefs.SetFloat("MIN_VOLTAGE_V", newMin);
            } else {
                PlayerPrefs.SetFloat("MIN_VOLTAGE_V", BikeManager.MIN_VOLTAGE_V);
                minVoltage.text = PlayerPrefs.GetFloat("MIN_VOLTAGE_V", BikeManager.MIN_VOLTAGE_V).ToString();
            }
        });

        totalRange.text = PlayerPrefs.GetFloat("TOTAL_RANGE_KM", BikeManager.BASE_TOTAL_RANGE_KM).ToString();
        totalRange.onValueChanged.AddListener(delegate {
            float newRange = -1;
            if (float.TryParse(totalRange.text, out newRange) && newRange > 0) {
                PlayerPrefs.SetFloat("TOTAL_RANGE_KM", newRange);
            } else {
                PlayerPrefs.SetFloat("TOTAL_RANGE_KM", BikeManager.BASE_TOTAL_RANGE_KM);
                totalRange.text = PlayerPrefs.GetFloat("TOTAL_RANGE_KM", BikeManager.BASE_TOTAL_RANGE_KM).ToString();
            }
        });

    }

}

using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PrefsOverlay : MonoBehaviour{
    public TMP_InputField wheelDiam;
    public TMP_InputField cellSCount;
    public TMP_InputField baseMaxRange;
    public TMP_InputField realMaxRange;
    [Space]
    public Button closeButton;

    private void Start() {
        closeButton.onClick.AddListener(delegate {
            gameObject.SetActive(false);
            BikeManager.instance.applySettings();
        });

        wheelDiam.text = PlayerPrefs.GetFloat("WHEEL_DIAMETRER_M").ToString();
        wheelDiam.onValueChanged.AddListener(delegate {
            float newDiam = -1;
            if (float.TryParse(wheelDiam.text, out newDiam) && newDiam > 0) {
                PlayerPrefs.SetFloat("WHEEL_DIAMETRER_M", newDiam);
            } else {
                PlayerPrefs.SetFloat("WHEEL_DIAMETRER_M", BikeManager.WHEEL_DIAMETRER_M);
                wheelDiam.text = PlayerPrefs.GetFloat("WHEEL_DIAMETRER_M").ToString();
            }
        });

        cellSCount.text = PlayerPrefs.GetFloat("CELL_S_COUNT").ToString();
        cellSCount.onValueChanged.AddListener(delegate {
            float newMax = -1;
            if (float.TryParse(cellSCount.text, out newMax) && newMax > 0) {
                PlayerPrefs.SetFloat("CELL_S_COUNT", newMax);
            } else {
                PlayerPrefs.SetFloat("CELL_S_COUNT", BikeManager.CELL_S_COUNT);
                cellSCount.text = PlayerPrefs.GetFloat("CELL_S_COUNT").ToString();
            }
        });

        baseMaxRange.text = PlayerPrefs.GetFloat("BASE_MAX_RANGE_KM").ToString();
        baseMaxRange.onValueChanged.AddListener(delegate {
            float newRange = -1;
            if (float.TryParse(baseMaxRange.text, out newRange) && newRange > 0) {
                PlayerPrefs.SetFloat("BASE_MAX_RANGE_KM", newRange);
            } else {
                PlayerPrefs.SetFloat("BASE_MAX_RANGE_KM", BikeManager.BASE_MAX_RANGE_KM);
                baseMaxRange.text = PlayerPrefs.GetFloat("BASE_MAX_RANGE_KM").ToString();
            }
        });

        realMaxRange.text = PlayerPrefs.GetFloat("REAL_MAX_RANGE_KM").ToString();
        realMaxRange.onValueChanged.AddListener(delegate {
            float newRange = -1;
            if (float.TryParse(realMaxRange.text, out newRange) && newRange > 0) {
                PlayerPrefs.SetFloat("REAL_MAX_RANGE_KM", newRange);
            } else {
                PlayerPrefs.SetFloat("REAL_MAX_RANGE_KM", BikeManager.REAL_MAX_RANGE_KM);
                realMaxRange.text = PlayerPrefs.GetFloat("REAL_MAX_RANGE_KM").ToString();
            }
        });

    }

}

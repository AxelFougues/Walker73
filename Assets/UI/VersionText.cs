using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class VersionText : MonoBehaviour{

    [SerializeField] TMP_Text text;
    [SerializeField] string prefix = "v ";
    [SerializeField] string sufix = "";

    private void Start() {
        text.text = prefix + Application.version + sufix;
    }

}

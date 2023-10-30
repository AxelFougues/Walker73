using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorManager : MonoBehaviour{
    public static ColorManager instance = null;

    private void Awake() {
        if (instance != null) Destroy(this);
        else instance = this;
    }

    public Theme theme;
}

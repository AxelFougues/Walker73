using System;
using System.Collections;
using UnityEngine;

public class ColorManager : MonoBehaviour{
    public static ColorManager instance = null;

    public Action<Theme> onThemeChange;

    private void Awake() {
        if (instance != null) Destroy(this);
        else instance = this;
    }

    public void setTheme(Theme newTheme) {
        this.theme = newTheme;
        onThemeChange?.Invoke(null);
    }

    public Theme theme;
    public Theme lightTheme;
    public Theme darkTheme;
}

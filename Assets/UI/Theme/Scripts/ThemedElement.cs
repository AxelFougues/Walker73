using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class ThemedElement : MonoBehaviour{

    public bool isBackground;
    public bool isPanel;
    public bool isHighlight;
    public bool isBase;
    public bool isBaseNegative;
    public bool isAccent;
    public bool isHalfTone;
    [Range(1, 2)]
    public int gradientSide = 1;
    [HideInInspector] public Theme overrideTheme = null;

    private void Start() {
        applyTheme();
        ColorManager.instance.onThemeChange += applyTheme;
    }

    private void OnDestroy() {
        if (ColorManager.instance != null) ColorManager.instance.onThemeChange -= applyTheme;
    }

    protected Color getColor(Color original, Theme theme = null) {
        if (theme == null) theme = ColorManager.instance.theme;
        if (overrideTheme != null) theme = overrideTheme;

        if (isBase) return theme.baseColor;
        if (isBaseNegative) return theme.baseNegativeColor;
        if (isAccent) return theme.accentColor;
        if (isHalfTone) return theme.halfTone;

        if (isBackground) {
            if (gradientSide == 1) return theme.background1;
            else return theme.background2;
        }
        if (isPanel) {
            if (gradientSide == 1) return theme.panel1;
            else return theme.panel2;
        }
        if (isHighlight) {
            if (gradientSide == 1) return theme.highlight1;
            else return theme.highlight2;
        }
        return original;
    }

    public abstract void applyTheme(Theme theme = null);
}

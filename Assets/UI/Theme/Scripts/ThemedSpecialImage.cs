using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ThemedSpecialImage : ThemedElement {

    [Space]
    public Image image;


    private void Start() {
        applyTheme();
    }

    public override void applyTheme(Theme theme = null) {
        if (theme == null) theme = ColorManager.instance.theme;
        if (overrideTheme != null) theme = overrideTheme;
        if (typeof(SpecialTheme) == theme.GetType()) {
            if (isBackground) {
                image.sprite = ((SpecialTheme)theme).specialBackground;
                image.color = Color.white;
                image.enabled = true;
            } else {
                image.enabled = false;
            }
        }
    }
}

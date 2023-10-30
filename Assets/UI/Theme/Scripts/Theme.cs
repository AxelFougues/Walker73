using System;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Theme", menuName = "ScriptableObjects/Theme")]
public class Theme : ScriptableObject{
    public Color background1;
    public Color background2;
    public int backgroundAngle = -45;
    [Space]
    public Color panel1;
    public Color panel2;
    public int panelAngle = -45;
    [Space]
    public Color highlight1;
    public Color highlight2;
    public int highlightAngle = -45;
    [Space]
    public Color baseColor;
    public Color accentColor;
    public Color halfTone;

    public virtual Sprite getBackground() { return null; }

}

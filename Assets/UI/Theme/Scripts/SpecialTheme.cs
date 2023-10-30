using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "SpecialTheme", menuName = "ScriptableObjects/SpecialTheme")]
public class SpecialTheme : Theme{
    public Sprite specialBackground;

    public override Sprite getBackground() { return null; }
}

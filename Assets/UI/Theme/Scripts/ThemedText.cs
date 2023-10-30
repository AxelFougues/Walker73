using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ThemedText : ThemedElement{

    [Space]
    public TMP_Text text;
    public Text textOld;

    public override void applyTheme(Theme theme = null) {
        if(text != null) text.color = getColor(text.color, theme);
        if(textOld != null) textOld.color = getColor(textOld.color, theme);
    }

    private void Start() {
        applyTheme();
    }

}

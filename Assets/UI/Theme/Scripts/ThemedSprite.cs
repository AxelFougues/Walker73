using UnityEngine;
using UnityEngine.UI;

public class ThemedSprite : ThemedElement{

    
    [Space]
    public Image sprite;

    public override void applyTheme(Theme theme = null) {
        sprite.color = getColor(sprite.color, theme);
    }

    private void Start() {
        applyTheme();
    }

}

using UnityEngine;
using UnityEngine.UI;

[AddComponentMenu("UI/Effects/Gradient")]
[ExecuteInEditMode]
public class UIGradient : BaseMeshEffect{

    public bool isBackground = false;
    public bool isPanel = false;
    public bool isHighlight = false;
    public Color m_color1 = Color.white;
    public Color m_color2 = Color.white;
    [Range(-180f, 180f)]
    public float m_angle = 0f;
    public bool m_ignoreRatio = true;

    [HideInInspector] public Theme overrideTheme = null;

    protected override void Start() {
        applyTheme();
        ColorManager.instance.onThemeChange += applyTheme;
    }

    private void OnDestroy() {
        base.OnDestroy();
        if(ColorManager.instance != null) ColorManager.instance.onThemeChange -= applyTheme;
    }

    public void applyTheme(Theme theme = null) {
        if (overrideTheme != null) theme = overrideTheme;
        else {
            if (theme == null && ColorManager.instance != null) theme = ColorManager.instance.theme;
            else return;
        }
        if (isBackground) {
            m_color1 = theme.background1;
            m_color2 = theme.background2;
            m_angle = theme.backgroundAngle;
        }
        if (isPanel) {
            m_color1 = theme.panel1;
            m_color2 = theme.panel2;
            m_angle = theme.panelAngle;
        }
        if (isHighlight) {
            m_color1 = theme.highlight1;
            m_color2 = theme.highlight2;
            m_angle = theme.highlightAngle;
        }
    }

    public override void ModifyMesh(VertexHelper vh)
    {
        if(gameObject.activeInHierarchy && enabled)
        {
            Rect rect = graphic.rectTransform.rect;
            Vector2 dir = UIGradientUtils.RotationDir(m_angle);

            if (!m_ignoreRatio)
                dir = UIGradientUtils.CompensateAspectRatio(rect, dir);

            UIGradientUtils.Matrix2x3 localPositionMatrix = UIGradientUtils.LocalPositionMatrix(rect, dir);

            UIVertex vertex = default(UIVertex);
            for (int i = 0; i < vh.currentVertCount; i++) {
                vh.PopulateUIVertex (ref vertex, i);
                Vector2 localPosition = localPositionMatrix * vertex.position;
                vertex.color *= Color.Lerp(m_color2, m_color1, localPosition.y);
                vh.SetUIVertex (vertex, i);
            }
        }
    }

}

using UnityEngine;
using UnityEngine.UI;

public class GridSizer : MonoBehaviour{

    public GridLayoutGroup grid;

    private void Awake() {

        
    }

    private void Start() {
        Vector2 spacingRatio = new Vector2(grid.spacing.x / grid.cellSize.x, grid.spacing.y / grid.cellSize.y);
        grid.cellSize = new Vector2(Camera.main.aspect > 1 ? Screen.height : Screen.width - (grid.padding.left + grid.padding.right), grid.cellSize.y);
        grid.spacing = new Vector2(grid.cellSize.x * spacingRatio.x, grid.cellSize.y * spacingRatio.y);
    }

    private void Update() {
        LayoutRebuilder.ForceRebuildLayoutImmediate(GetComponent<RectTransform>());
        Destroy(this);
    }

}

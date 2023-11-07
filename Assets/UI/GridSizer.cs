using UnityEngine;
using UnityEngine.UI;

public class GridSizer : MonoBehaviour{

    public GridLayoutGroup grid;

    private void Awake() {

        
    }

    private void Start() {
        grid.cellSize = new Vector2(Camera.main.aspect > 1 ? Screen.height : Screen.width - (grid.padding.left + grid.padding.right), grid.cellSize.y);
    }

    private void Update() {
        LayoutRebuilder.ForceRebuildLayoutImmediate(GetComponent<RectTransform>());
        Destroy(this);
    }

}

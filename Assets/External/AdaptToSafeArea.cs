using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdaptToSafeArea : MonoBehaviour{

    Canvas canvas;

    private void Start() {
        canvas = GetComponentInParent<Canvas>();
        RectTransform rt = GetComponent<RectTransform>();
        applySafeArea(rt);
    }

    void applySafeArea(RectTransform safeAreaTransform) {
        if (safeAreaTransform == null)
            return;

        var safeArea = Screen.safeArea;

        var anchorMin = safeArea.position;
        var anchorMax = safeArea.position + safeArea.size;
        anchorMin.x /= canvas.pixelRect.width;
        anchorMin.y /= canvas.pixelRect.height;
        anchorMax.x /= canvas.pixelRect.width;
        anchorMax.y /= canvas.pixelRect.height;

        safeAreaTransform.anchorMin = anchorMin;
        safeAreaTransform.anchorMax = anchorMax;
    }

}

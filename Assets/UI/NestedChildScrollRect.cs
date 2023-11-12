using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class NestedChildScrollRect : ScrollRect {
    ScrollRect parentScrollRect;
    bool _draggingParent = false;
    bool _draggingChild = false;
    float snapSpeed = 10f;

    protected override void Awake() {
        base.Awake();
        parentScrollRect = GetScrollParent(transform);
    }

    private void Update() {
        if (!_draggingChild && normalizedPosition.x > 0 && normalizedPosition.x < 1) {
            SetNormalizedPosition(Mathf.Lerp(normalizedPosition.x, Mathf.RoundToInt(normalizedPosition.x), snapSpeed * Time.deltaTime), 0);
        }
    }

    ScrollRect GetScrollParent(Transform t) {
        if (t.parent != null) {
            ScrollRect scroll = t.parent.GetComponent<ScrollRect>();
            if (scroll != null) return scroll;
            else return GetScrollParent(t.parent);
        }
        return null;
    }

    bool IsPotentialParentDrag(Vector2 inputDelta) {
        if (parentScrollRect != null) {
            if (parentScrollRect.horizontal && !parentScrollRect.vertical) {
                return Mathf.Abs(inputDelta.x) > Mathf.Abs(inputDelta.y);
            }
            if (!parentScrollRect.horizontal && parentScrollRect.vertical) {
                return Mathf.Abs(inputDelta.x) < Mathf.Abs(inputDelta.y);
            } else return true;
        }
        return false;
    }

    public override void OnInitializePotentialDrag(PointerEventData eventData) {
        base.OnInitializePotentialDrag(eventData);
        parentScrollRect?.OnInitializePotentialDrag(eventData);
    }

    public override void OnBeginDrag(PointerEventData eventData) {
        if (IsPotentialParentDrag(eventData.delta)) {
            parentScrollRect.OnBeginDrag(eventData);
            _draggingParent = true;
        } else {
            base.OnBeginDrag(eventData);
            _draggingChild = true;
        }
    }

    public override void OnDrag(PointerEventData eventData) {
        if (_draggingParent) {
            parentScrollRect.OnDrag(eventData);
        } else {
            base.OnDrag(eventData);
        }
    }

    public override void OnEndDrag(PointerEventData eventData) {
        base.OnEndDrag(eventData);
        if (parentScrollRect != null && _draggingParent) {
            _draggingParent = false;
            parentScrollRect.OnEndDrag(eventData);
        } else {
            _draggingChild = false;
        }
    }

    
}

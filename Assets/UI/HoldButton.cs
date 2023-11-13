using System;
using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class HoldButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {

    public Action onClick;
    public Action onHold;

    public bool isHeld = false;
    public bool interactible = true;
    public bool holdTriggerOnRelease = false;
    public Image fill;
    public float clickDuration = 1f;
    public float holdDuration = 3f;

    DateTime time;

    IEnumerator fillRoutine() {
        float fillDuration = (float)(holdDuration - clickDuration);
        float timer = 0;
        while (timer < holdDuration) {
            if (fill != null && timer > clickDuration) fill.fillAmount = (timer - clickDuration) / fillDuration;
            timer += Time.deltaTime;
            yield return null;
        }
        if (!holdTriggerOnRelease) onHold?.Invoke();
    }

    public void OnPointerDown(PointerEventData eventData) {
        if (interactible) {
            time = DateTime.Now;
            StartCoroutine(fillRoutine());
            isHeld = true;
        }
    }

    public void OnPointerUp(PointerEventData eventData) {
        if (interactible) {
            StopAllCoroutines();
            double duration = (DateTime.Now - time).TotalSeconds;
            if (duration >= holdDuration) {
                if(holdTriggerOnRelease) onHold?.Invoke();
            } else if (duration < clickDuration) onClick?.Invoke();
            if (fill != null) fill.fillAmount = 0;
            isHeld = false;
        }
    }
}

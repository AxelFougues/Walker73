// This is a stripped-off version of the Unity file `UnityPlayerActivity.java`.
// Original file is not included to prevent licensing issues.
//
// If you ever need a specific usage, you can copy the original file from
//

package com.unity3d.player;

import android.app.Activity;

public class UnityPlayerActivity extends Activity implements IUnityPlayerLifecycleEvents
{
    protected UnityPlayer mUnityPlayer; // don't change the name of this variable; referenced from native code

    // When Unity player unloaded move task to background
    @Override public void onUnityPlayerUnloaded() {
    }

    // When Unity player quited kill process
    @Override public void onUnityPlayerQuitted() {
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(UpdateAndroidLib))]

[CanEditMultipleObjects]
public class UpdateAndroidLibEditor : Editor{

    public override void OnInspectorGUI() {
        DrawDefaultInspector();

        if (GUILayout.Button("Update")) {
            ((UpdateAndroidLib)target).updateLib();
            AssetDatabase.ImportAsset("Assets/Plugins", ImportAssetOptions.ImportRecursive);
        }
    }

}

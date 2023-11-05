using System.IO;
using UnityEditor;
using UnityEngine;

[InitializeOnLoad]
public class EditorAutoKeys : MonoBehaviour{

    [MenuItem("Keys/Clear Keys")]
    static void ClearKeys() {
        PlayerSettings.keyaliasPass = PlayerSettings.keystorePass = "";
    }

    [MenuItem("Keys/Force Set Keys")]
    static void ManualSetKeys() {
        var password = EditorInputDialog.Show("[EditorAutoKeys] Keystore Password", "Enter keystore password:", "", "Enter", "Skip");
        if (!string.IsNullOrEmpty(password)) PlayerSettings.keyaliasPass = PlayerSettings.keystorePass = password;
    }

    [MenuItem("Keys/Check Set Keys")]
    static void CheckSetKeys() {
        if (string.IsNullOrEmpty(PlayerSettings.keystorePass) || string.IsNullOrEmpty(PlayerSettings.keyaliasPass)) ManualSetKeys();
    }

}



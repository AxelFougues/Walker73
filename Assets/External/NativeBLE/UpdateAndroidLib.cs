using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class UpdateAndroidLib : MonoBehaviour{

    public string buildOutputName = "app-debug.aar";
    public string libBuildPath = "C:/ZINC-The-Cyborg-Dashboard/NativeNFC/app/build/outputs/aar";
    public string localLibPath = "Packages/com.azapps.native-nfc/Runtime/Android";

    public void updateLib() {

        string origin = libBuildPath + "/" + buildOutputName;
        string destination = localLibPath + "/" + buildOutputName;

        if (!File.Exists(origin)) {
            Debug.LogError("Android Lib build is missing at " + origin);
            return;
        }
        if (File.Exists(destination)) {
            File.Delete(destination);
            string metaFile = Path.GetFileNameWithoutExtension(destination) + ".meta";
            if (File.Exists(metaFile)) File.Delete(metaFile);
        }
        File.Copy(origin, destination);
    }
}

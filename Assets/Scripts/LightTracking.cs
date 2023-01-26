using System;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.UI;

 
public class LightTracking : MonoBehaviour
{
    public Text LightTrackingStatus;
    public float LuminanceNormalizationFactor = 30;
 
    void Start()
    {
        MLResult result = MLLightingTracking.Start();
        if (!result.IsOk)
        {
            // uh-oh! something's not right!
            enabled = false;
            return;
        }
        RenderSettings.ambientLight = Color.black;
    }
 
    void OnDestroy()
    {
        MLLightingTracking.Stop();
    }
 
    void Update()
    {
        LightTrackingStatus.text = "";
 
        ushort[] cameraLuminance = MLLightingTracking.AmbientCameraLuminance;
 
        LightTrackingStatus.text += string.Format("Average Luminance: {0}\n\n", MLLightingTracking.AverageLuminance);
 
        LightTrackingStatus.text += string.Format("Global Temperature: {0}K\n", MLLightingTracking.GlobalTemperature);
        LightTrackingStatus.text += string.Format("Global Temperature Color: {0}\n\n", MLLightingTracking.GlobalTemperatureColor);
 
        float normalizedLuminance = Mathf.Clamp( MLLightingTracking.AverageLuminance, 0.0f, LuminanceNormalizationFactor) / LuminanceNormalizationFactor;
        RenderSettings.ambientLight = MLLightingTracking.GlobalTemperatureColor * normalizedLuminance;
    }
}
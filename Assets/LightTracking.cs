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
 
        TimeSpan timeSpan = TimeSpan.FromSeconds(MLLightingTracking.AmbientCameraLuminanceAgeSeconds);
        DateTime dateTime = DateTime.MinValue.Add(timeSpan);
        LightTrackingStatus.text += dateTime.ToString("MM/dd/yyyy hh:mm:ss.fff tt\n\n");
 
        LightTrackingStatus.text += string.Format("{0} Luminance: {1}\n", MLLightingTracking.Camera.FarLeft, cameraLuminance[(int)MLLightingTracking.Camera.FarLeft]);
        LightTrackingStatus.text += string.Format("{0} Luminance: {1}\n", MLLightingTracking.Camera.Left, cameraLuminance[(int)MLLightingTracking.Camera.Left]);
        LightTrackingStatus.text += string.Format("{0} Luminance: {1}\n", MLLightingTracking.Camera.Right, cameraLuminance[(int)MLLightingTracking.Camera.Right]);
        LightTrackingStatus.text += string.Format("{0} Luminance: {1}\n", MLLightingTracking.Camera.FarRight, cameraLuminance[(int)MLLightingTracking.Camera.FarRight]);
        LightTrackingStatus.text += string.Format("Average Luminance: {0}\n\n", MLLightingTracking.AverageLuminance);
 
        timeSpan = TimeSpan.FromSeconds(MLLightingTracking.GlobalTemperatureAgeSeconds);
        dateTime = DateTime.MinValue.Add(timeSpan);
  
        LightTrackingStatus.text += dateTime.ToString("MM/dd/yyyy hh:mm:ss.fff tt\n\n");
 
        LightTrackingStatus.text += string.Format("Global Temperature: {0}K\n", MLLightingTracking.GlobalTemperature);
        LightTrackingStatus.text += string.Format("Global Temperature Color: {0}\n\n", MLLightingTracking.GlobalTemperatureColor);
 
        LightTrackingStatus.text += string.Format("Raw Pixel Average: {0}\n", MLLightingTracking.RawPixelColorAverage);
        LightTrackingStatus.text += string.Format("CIE Tristimulus: {0}\n", MLLightingTracking.TristimulusValues);
 
        float normalizedLuminance = Mathf.Clamp( MLLightingTracking.AverageLuminance, 0.0f, LuminanceNormalizationFactor) / LuminanceNormalizationFactor;
        RenderSettings.ambientLight = MLLightingTracking.GlobalTemperatureColor * normalizedLuminance;
    }
}
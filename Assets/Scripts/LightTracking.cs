using System;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.UI;
using System.Collections;

 
public class LightTracking : MonoBehaviour
{
    public Text LightTrackingStatus;
    public float LuminanceNormalizationFactor = 30;

    public Transform camTransform;
    public GameObject luminancePrefab;

    private float avgLuminance = 0;
    private MLRaycast.QueryParams _raycastParams = new MLRaycast.QueryParams(); 
    private bool instantiated = false;

    public float smoothTime = 0.3F;
    [Range(0.000f, 0.800f)]
    public float decay = 0.01F;
    private Vector3 velocity = Vector3.zero;
    private GameObject lumInstance;

 
    void Start()
    {
        // Start raycasting.
        MLRaycast.Start();

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
               // Stop raycasting.
        MLRaycast.Stop();
    }
 
    void Update(){
        ushort[] cameraLuminance = MLLightingTracking.AmbientCameraLuminance;
 
        float normalizedLuminance = Mathf.Clamp( MLLightingTracking.AverageLuminance, 0.0f, LuminanceNormalizationFactor) / LuminanceNormalizationFactor;
        RenderSettings.ambientLight = MLLightingTracking.GlobalTemperatureColor * normalizedLuminance;

        if(normalizedLuminance > avgLuminance){
            // Update the orientation data in the raycast parameters.
            _raycastParams.Position = camTransform.position;
            _raycastParams.Direction = camTransform.forward;
            _raycastParams.UpVector = camTransform.up;

            // Make a raycast request using the raycast parameters 
            MLRaycast.Raycast(_raycastParams, HandleOnReceiveRaycast);
            Debug.Log(string.Format("Old: {0}  New: {1}", normalizedLuminance, avgLuminance));
            avgLuminance = normalizedLuminance;
        }
    }


    void HandleOnReceiveRaycast( MLRaycast.ResultState state, 
                                UnityEngine.Vector3 point, Vector3 normal, 
                                float confidence) {
        if (state ==  MLRaycast.ResultState.HitObserved) {

            Quaternion rotation = Quaternion.FromToRotation(Vector3.up, normal);
            // Instantiate the prefab at the given point.
            if(!instantiated){
                lumInstance = Instantiate(luminancePrefab, point, rotation);
                instantiated = true;
            }
            else{
                lumInstance.transform.position = Vector3.Lerp(lumInstance.transform.position, point, smoothTime);
            }
            Debug.Log("Placed Lum Aura");
        }
    }
}


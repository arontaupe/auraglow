using System;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.UI;
using System.Collections;

public class LightTracking : MonoBehaviour
{
    #region Variables
    public Text LightTrackingStatus;
    public Transform camTransform;
    public GameObject luminancePrefab;
    public bool lightAllergic = false;
    private float avgLuminance = 0;
    private MLRaycast.QueryParams _raycastParams = new MLRaycast.QueryParams(); 
    private bool instantiated = false;
    public float lerpRatio = 0.3f;
    [Range(0.0f, 0.01f)]
    public float decay = 0.00001f;
    private Vector3 velocity = Vector3.zero;
    private GameObject lumInstance;
    #endregion

    #region Methods
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
        StartCoroutine (CheckLuminance());
    }
 
    void OnDestroy(){
        MLLightingTracking.Stop();
               // Stop raycasting.
        MLRaycast.Stop();
    }

    private WaitForSeconds refreshIntervalWait = new WaitForSeconds(0.3f);
    IEnumerator CheckLuminance() 
    {
        while (true) {
        float luminance = MLLightingTracking.AverageLuminance;
        if (!lightAllergic){
            avgLuminance -= decay;
            if(luminance > avgLuminance){
                // Update the orientation data in the raycast parameters.
                _raycastParams.Position = camTransform.position;
                _raycastParams.Direction = camTransform.forward;
                _raycastParams.UpVector = camTransform.up;

                // Make a raycast request using the raycast parameters 
                MLRaycast.Raycast(_raycastParams, HandleOnReceiveRaycast);
                avgLuminance = luminance;
            }    
        }
        else{
            avgLuminance += decay;
            if(luminance < avgLuminance){
                // Update the orientation data in the raycast parameters.
                _raycastParams.Position = camTransform.position;
                _raycastParams.Direction = camTransform.forward;
                _raycastParams.UpVector = camTransform.up;

                // Make a raycast request using the raycast parameters 
                MLRaycast.Raycast(_raycastParams, HandleOnReceiveRaycast);
                avgLuminance = luminance;
            }    
        }
        yield return refreshIntervalWait;
        }
    }

    IEnumerator NormalMarker(Vector3 point) {
        lumInstance.transform.position = Vector3.Lerp(lumInstance.transform.position, point, lerpRatio);
        yield return 0;
    }

    void HandleOnReceiveRaycast( MLRaycast.ResultState state, 
                                UnityEngine.Vector3 point, Vector3 normal, 
                                float confidence) {
        if (state ==  MLRaycast.ResultState.HitObserved) {
            // Instantiate the prefab at the given point.
            if(!instantiated){
                lumInstance = Instantiate(luminancePrefab, point, Quaternion.identity);
                instantiated = true;
                Debug.Log("Placed Lum Aura");
            }
            else{
                StartCoroutine(NormalMarker(point));
            }
        }
    }
    #endregion
}


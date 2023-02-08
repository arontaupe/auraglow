using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class PlanesFinder : MonoBehaviour
{
    #region Variables
    public Transform BBoxTransform;
    public Vector3 BBoxExtents;
    public GameObject PlaneGameObject;
    [Range(0.0f, 1.0f)]
    public float planeScaleFactor = 0.1f;
    public bool enableScaling = false;
    [Range(1, 30)]
    public uint maxPlanes = 10;
    public bool showDebug = false;

    [Range(1.0f, 30.0f)]
    public float cycleTime = 15.0f;

    private MLPlanes.QueryParams _queryParams = new MLPlanes.QueryParams();
    public MLPlanes.QueryFlags QueryFlags;

    private float timeSinceLastRequest = 0f;
    private List<GameObject> _planeCache = new List<GameObject>();
    #endregion

    #region Methods

    void Start(){
        MLPlanes.Start();
    }

    private void OnDestroy(){
        MLPlanes.Stop();
    }

    void Update(){
        timeSinceLastRequest += Time.deltaTime;
        if (timeSinceLastRequest > cycleTime){
            timeSinceLastRequest = 0f;
            RequestPlanes();
        }
    }

    void RequestPlanes(){
        _queryParams.Flags = QueryFlags;
        _queryParams.MaxResults = maxPlanes;
        _queryParams.BoundsCenter = BBoxTransform.position;
        _queryParams.BoundsRotation = BBoxTransform.rotation;
        _queryParams.BoundsExtents = BBoxExtents;

        MLPlanes.GetPlanes(_queryParams, HandleOnReceivedPlanes);
    }

    private void HandleOnReceivedPlanes(MLResult result, MLPlanes.Plane[] planes, MLPlanes.Boundaries[] boundaries)
    {
       for (int i = _planeCache.Count - 1; i >= 0; --i)
       {
           Destroy(_planeCache[i]);
           _planeCache.Remove(_planeCache[i]);
       }

       GameObject newPlane;
       for (int i = 0; i < planes.Length; ++i){
           newPlane = Instantiate(PlaneGameObject);
           newPlane.transform.position = planes[i].Center;
            // rotation disabled
           //newPlane.transform.rotation = planes[i].Rotation;
           if(enableScaling){
                newPlane.transform.localScale = new Vector3(planes[i].Width * planeScaleFactor, planes[i].Height * planeScaleFactor, planes[i].Width * planeScaleFactor); // Set plane scale
           }
           _planeCache.Add(newPlane);
       }
       if (showDebug){
            Debug.Log(string.Format("{0} {1} added", planes.Length, QueryFlags));
       }
    }
    #endregion
}
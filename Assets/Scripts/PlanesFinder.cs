using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class PlanesFinder : MonoBehaviour
{
    public Transform BBoxTransform;
    public Vector3 BBoxExtents;
    public GameObject PlaneGameObject;

    private MLPlanes.QueryParams _queryParams = new MLPlanes.QueryParams();
    public MLPlanes.QueryFlags QueryFlags;


    private float timeout = 5f;
    private float timeSinceLastRequest = 0f;
    private List<GameObject> _planeCache = new List<GameObject>();

    void Start()
    {
        MLPlanes.Start();
    }

    private void OnDestroy()
    {
        MLPlanes.Stop();
    }


    void Update()
    {
        timeSinceLastRequest += Time.deltaTime;
        if (timeSinceLastRequest > timeout)
        {
            timeSinceLastRequest = 0f;
            RequestPlanes();
        }
    }

    void RequestPlanes()
    {
        _queryParams.Flags = QueryFlags;
        _queryParams.MaxResults = 100;
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
       for (int i = 0; i < planes.Length; ++i)
       {
           newPlane = Instantiate(PlaneGameObject);
           newPlane.transform.position = planes[i].Center;
           //newPlane.transform.rotation = planes[i].Rotation;
           //newPlane.transform.localScale = new Vector3(planes[i].Width, planes[i].Height, 1f); // Set plane scale
           _planeCache.Add(newPlane);
           Debug.Log("Plane Object added");
       }
    }
}
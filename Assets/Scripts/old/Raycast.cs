using System.Collections;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class Raycast : MonoBehaviour
{
    public GameObject prefab;    // Cube prefab
    public Transform controllerTransform; //controller gameobject in scene
    private bool prefabCreated = false; //Did we already make a cube?
    private bool triggerPulled = false; //Is the trigger currently pulled?
    private GameObject cubeObject; //instantiated cube
    private MLInput.Controller controller; //ML Controller

    private void Start()
    {
        controller = MLInput.GetController(MLInput.Hand.Left);
    }

    // Update is called once per frame
    void Update()
    {
        //Perform the raycast if we're pulling the trigger and the trigger isn't already pulled
        if ((controller.TriggerValue > 0.8f) && !triggerPulled)
        {
            //Get the orientation of the controller
            controllerTransform.rotation = controller.Orientation;
            // Create a raycast parameters variable
            MLRaycast.QueryParams _raycastParams = new MLRaycast.QueryParams
            {
                // Update the parameters with our controller's transform
                Position = controller.Position,
                Direction = controllerTransform.forward,
                UpVector = controllerTransform.up,
                // Provide a size of our raycasting array (1x1)
                Width = 1,
                Height = 1
            };
            // Feed our modified raycast parameters and handler to our raycast request
            MLRaycast.Raycast(_raycastParams, HandleOnReceiveRaycast);
            triggerPulled = true;
        }
        //Trigger is released, reset our bool so we can raycast again
        if((controller.TriggerValue < 0.2f))
        {
            triggerPulled = false;
        }
    }

    // Instantiate the prefab if one doesn't exist at the given point, otherwise move the prefab to the point
    // Rotate the prefab to match given normal.
    private void NormalMarker(Vector3 point, Vector3 normal)
    {
        Quaternion rotation = Quaternion.FromToRotation(Vector3.up, normal);
        if (!prefabCreated)
        {
            cubeObject = Instantiate(prefab, point, rotation);
            prefabCreated = true;
        }
        cubeObject.transform.position = point;
        cubeObject.transform.rotation = rotation;
    }

    // Use a callback to know when to run the NormalMaker() function.
    void HandleOnReceiveRaycast(MLRaycast.ResultState state, UnityEngine.Vector3 point, Vector3 normal, float confidence)
    {
        if (state == MLRaycast.ResultState.HitObserved)
        {
            NormalMarker(point, normal);
        }
    }
}
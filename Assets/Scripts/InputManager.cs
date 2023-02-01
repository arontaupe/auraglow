using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class InputManager : MonoBehaviour
{
    private MLInput.Controller controller;
    public Transform controllerTransform; //controller gameobject in scene

    public GameObject controllerInput;
    public GameObject attractor;
    private bool attractorCreated = false; //Did we already make a cube?

    void Start()
    {
        MLInput.Start();
        controller = MLInput.GetController(MLInput.Hand.Left);


        MLInput.OnControllerButtonDown += OnButtonDown;
        MLInput.OnControllerButtonUp += OnButtonUp;

        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }

    void OnButtonDown(byte controllerId, MLInput.Controller.Button button) {
    }

    void OnButtonUp(byte controllerId, MLInput.Controller.Button button) {

        if (button == MLInput.Controller.Button.HomeTap)
        {
            SceneManager.LoadScene("MainMenuDemoScene");
            Scene scene = SceneManager.GetActiveScene();
            Debug.Log(scene.name);
        }

        if (button == MLInput.Controller.Button.Bumper)
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
        }
    }

        // Instantiate the prefab if one doesn't exist at the given point, otherwise move the prefab to the point
    // Rotate the prefab to match given normal.
    private void NormalMarker(Vector3 point, Vector3 normal)
    {
        Quaternion rotation = Quaternion.FromToRotation(Vector3.up, normal);
        if (!attractorCreated)
        {
            attractor = Instantiate(attractor, point, rotation);
            Debug.Log("Attractor created");
            attractorCreated = true;
        }
        attractor.transform.position = point;
        attractor.transform.rotation = rotation;
    }

     // Use a callback to know when to run the NormalMaker() function.
    void HandleOnReceiveRaycast(MLRaycast.ResultState state, UnityEngine.Vector3 point, Vector3 normal, float confidence)
    {
        if (state == MLRaycast.ResultState.HitObserved)
        {
            NormalMarker(point, normal);
        }
    }
 
    private void OnDestroy()
    {
        MLInput.Stop();
    }
}

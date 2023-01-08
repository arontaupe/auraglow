using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.SceneManagement;

public class ButtonScript : MonoBehaviour {

    #region Private Variables
    private GameObject _cube;
    private Quaternion _originalOrientation;
    private Vector3 _rotation = new Vector3(0, 0, 0);
    private const float _rotationSpeed = 30.0f;
    private MLInput.Controller _controller;
    #endregion

    #region Unity Methods
    /// <summary>
    /// Initializes the _cube GameObject and _controller object
    /// Captures the Cube's original rotation quaternion in _originalOrientation
    /// Starts receiving user input from the Control and sets up event handlers for input
    /// </summary>
    // Start is called before the first frame update
    void Start() {
        _cube = GameObject.Find("Pig");
        _originalOrientation = _cube.transform.rotation;

        MLInput.OnControllerButtonDown += OnButtonDown;
        MLInput.OnControllerButtonUp += OnButtonUp;
        _controller = MLInput.GetController(MLInput.Hand.Left);
    }

    /// <summary>
    /// Cleans up event handlers and stops receiving input
    /// </summary>
    void OnDestroy() {
        MLInput.OnControllerButtonDown -= OnButtonDown;
        MLInput.OnControllerButtonUp -= OnButtonUp;
    }

    /// <summary>
    /// Rotates the cube by the _rotation vector at _rotationSpeed speed
    /// Checks the state of the Trigger button
    /// </summary>
    // Update is called once per frame
    void Update()
    {
        _cube.transform.Rotate(_rotation, _rotationSpeed * Time.deltaTime);
        CheckTrigger();
    }
    #endregion

    #region Private Methods
    /// <summary>
    /// Updates the _rotation's y component to 90 when the Bumper button is pressed down
    /// </summary>
    /// <param name="controllerId"></param>
    /// <param name="button"></param>
    void OnButtonDown(byte controllerId, MLInput.Controller.Button button) {
        if (button == MLInput.Controller.Button.Bumper) {
            _rotation.y = 90;
        }
    }

    /// <summary>
    /// Updates the _rotation's y component to 0 when the Bumper button is released
    /// Resets the Cube's orientation to its original orientation, when the Home Button is pressed and released
    /// </summary>
    /// <param name="controllerId"></param>
    /// <param name="button"></param>
    void OnButtonUp(byte controllerId, MLInput.Controller.Button button) {
        if (button == MLInput.Controller.Button.Bumper)
        {
            _cube.transform.rotation = _originalOrientation;
            SceneManager.LoadScene("MainMenu");       
        }
    }

    /// <summary>
    /// Updates the _rotation's x component to 90 when the Trigger is pressed down more than 20%
    /// Otherwise the _rotation's x component is set to 0
    /// </summary>
    void CheckTrigger() {
        if (_controller.TriggerValue > 0.2f) {
            _rotation.x = 90;
        } else {
            _rotation.x = 0;
        }
    }
    #endregion
}
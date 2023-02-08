using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;

public class TouchpadGestures : MonoBehaviour 
{

    #region Public Variables
    public Text typeText, stateText, directionText;
    public Camera Camera;
    #endregion

    #region Private Variables
    private MLInput.Controller _controller;
    #endregion

    #region Unity Methods
    void Start() 
    {
        MLInput.Start();
        _controller = MLInput.GetController(MLInput.Hand.Left);
    }

    void Update() 
    {
        updateTransform();
        updateGestureText();
    }
    #endregion

    #region Private Methods
    void updateGestureText() 
    {
        string gestureType = _controller.CurrentTouchpadGesture.Type.ToString();
        string gestureState = _controller.TouchpadGestureState.ToString();
        string gestureDirection = _controller.CurrentTouchpadGesture.Direction.ToString();

        typeText.text = "Type: " + gestureType;
        stateText.text = "State: " + gestureState;
        directionText.text = "Direction: " + gestureDirection;
    }

    void updateTransform() 
    {
        float speed = Time.deltaTime * 5.0f;

        Vector3 pos = Camera.transform.position + Camera.transform.forward;
        gameObject.transform.position = Vector3.SlerpUnclamped(gameObject.transform.position, pos, speed);

        Quaternion rot = Quaternion.LookRotation(gameObject.transform.position - Camera.transform.position);
        gameObject.transform.rotation = Quaternion.Slerp(gameObject.transform.rotation, rot, speed);
    }
    #endregion
}

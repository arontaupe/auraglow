using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class EyeTracking : MonoBehaviour {
    #region Public Variables
    public GameObject Camera;
    #endregion

    #region Private Variables
    private Vector3 _heading;
    public GameObject focusObject;
    #endregion

    #region Unity Methods
    void Start() {
        MLEyes.Start();
         Debug.Log("MLEyes Started");
     
    }    
    private void OnDisable() {
        MLEyes.Stop();
    }
    void Update() {
        if (MLEyes.IsStarted) {
            Instantiate(focusObject, MLEyes.FixationPoint, Quaternion.identity);
            Debug.Log("Fixation Locked");
        }
    }
    #endregion
}


#region Imports
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
#endregion

public class EyeTracking : MonoBehaviour
{
    #region Public Variables
    public GameObject Camera;
    public Material FocusedMaterial, NonFocusedMaterial;
    #endregion

    #region Private Variables
    private Vector3 _heading;
    private MeshRenderer _meshRenderer;
    #endregion

    #region Unity Methods
    void Start()
    {
        MLEyes.Start();
        transform.position = Camera.transform.position + Camera.transform.forward * 2.0f;
        // Get the meshRenderer component
        _meshRenderer = gameObject.GetComponent<MeshRenderer>();
    }
    private void OnDisable()
    {
        MLEyes.Stop();
    }
    void Update()
    {
        if (MLEyes.IsStarted)
        {
            RaycastHit rayHit;
            _heading = MLEyes.FixationPoint - Camera.transform.position;
            // Use the proper material
            if (Physics.Raycast(Camera.transform.position, _heading, out rayHit, 10.0f))
            {
                _meshRenderer.material = FocusedMaterial;
            }
            else
            {
                _meshRenderer.material = NonFocusedMaterial;
            }
        }
    }
    #endregion
}
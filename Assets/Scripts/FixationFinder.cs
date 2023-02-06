using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.XR.MagicLeap;

public class FixationFinder : MonoBehaviour
{
    #region Public Variables
    public GameObject fixPoint;
    public GameObject Camera;
    #endregion

    #region Private Variables
    private Vector3 _heading;
    #endregion

    #region Unity Methods
    void Start()
    {
        MLEyes.Start();

    }
    void Update()
    {
        Destroy(Instantiate(fixPoint, MLEyes.FixationPoint, Quaternion.identity), 1.0f);
        Debug.Log("Placed Fixpoint");

    }
    #endregion
}

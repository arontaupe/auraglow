using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;


public class DistanceCalculator : MonoBehaviour
{
    public Text DistanceText;
    public Transform CameraTransform;

    public Transform TargetTransform;

    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float distance = (TargetTransform.position - CameraTransform.position).magnitude;
        distance = Mathf.Round(distance * 10.0f) * 0.1f;
        DistanceText.text = distance.ToString() + " m";
    }
}

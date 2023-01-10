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
        DistanceText.text = distance.ToString();
    }
}

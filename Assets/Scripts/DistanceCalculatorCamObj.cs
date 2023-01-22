using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;


public class DistanceCalculatorCamObj : MonoBehaviour
{
    public Text DistanceText;
    public Text EmissionRate;
    public Transform CameraTransform;
    private Transform TargetTransform;
    ParticleSystem aura;
    ParticleSystem.EmissionModule emissionModule;
    public float EmissionRateLimit = 20.0f;

    
    // Start is called before the first frame update
    void Start()
    {
        aura = GetComponent<ParticleSystem>();
        emissionModule = aura.emission;
        TargetTransform = gameObject.transform;
        
    }

    void SetValue(float min = 0.0f, float max = 10.0f)
    {
        emissionModule.rateOverTime = new ParticleSystem.MinMaxCurve(min, max);
        emissionModule.rate = max;
        EmissionRate.text = string.Format("min {0} max {1}.", emissionModule.rateOverTime.constantMin, emissionModule.rateOverTime.constantMax);
    }
    

    // Update is called once per frame
    void Update()
    {
        float distance = (TargetTransform.position - CameraTransform.position).magnitude;
        distance = Mathf.Round(distance * 10.0f) * 0.1f;
        DistanceText.text = distance.ToString() + " m";  
        SetValue(0.0f,max: EmissionRateLimit/distance );     
    }
}

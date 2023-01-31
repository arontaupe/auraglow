using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;


public class DistanceCalculatorCamObj : MonoBehaviour
{
    private Text DistanceCamText;
    private TextMesh emissionRate;
    private TextMesh dist;
    private Transform CameraTransform;
    private ParticleSystem aura;
    private ParticleSystem.EmissionModule emissionModule;
    public float EmissionRateLimit = 20.0f;

    void Awake(){
        aura = GetComponent<ParticleSystem>();
        emissionModule = aura.emission;
        dist = transform.Find("DistanceCamera").GetComponent<TextMesh>();
        CameraTransform = GameObject.Find("Main Camera").transform;
        emissionRate = transform.Find("EmissionRate").GetComponent<TextMesh> ();  
    }

    void SetValue(float min = 0.0f, float max = 10.0f){
        emissionModule.rateOverTime = new ParticleSystem.MinMaxCurve(min, max);
        emissionModule.rate = max;
        emissionRate.text = string.Format("min {0} max {1}.", emissionModule.rateOverTime.constantMin, emissionModule.rateOverTime.constantMax);
    }
    
    void Update(){
        float distance = (gameObject.transform.position - CameraTransform.position).magnitude;
        distance = Mathf.Round(distance * 10.0f) * 0.1f;
        dist.text = distance.ToString() + " m";  
        SetValue(0.0f,max: EmissionRateLimit/distance );     
    }
}

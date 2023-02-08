#region Imports
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TestTools;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;
#endregion


[RequireComponent(typeof(ParticleSystem))]
public class DistanceCalculatorCamObj : MonoBehaviour
{
    #region Variables
    private TextMesh emissionRate;
    private TextMesh dist;
    private Transform CameraTransform;
    private ParticleSystem aura;
    private ParticleSystem.EmissionModule emissionModule;
    [Range(10.0f, 25.0f)]
    public float EmissionRateLimit = 20.0f;
    [Range(0.01f, 10.0f)]
    public float EmissionRateMin = 1.0f;
    public bool displayValues= false;
    [Range(0.01f, 10.0f)]
    public float cycleTime = 1.0f;
    private float timeSinceLastRequest = 0f;
    #endregion

    #region Methods
    void Awake(){
        aura = GetComponent<ParticleSystem>();
        emissionModule = aura.emission;
        dist = transform.Find("DistanceCamera").GetComponent<TextMesh>();
        CameraTransform = GameObject.Find("Main Camera").transform;
        emissionRate = transform.Find("EmissionRate").GetComponent<TextMesh> ();  
    }

    void SetValue(float min = 0.0f, float max = 10.0f){
        emissionModule.rateOverTime = new ParticleSystem.MinMaxCurve(min, max);
        //emissionModule.rate = max;
        if(displayValues){
            emissionRate.text = string.Format("min {0} max {1}.", emissionModule.rateOverTime.constantMin, emissionModule.rateOverTime.constantMax);
        }
    }
    
    void Update(){
        timeSinceLastRequest += Time.deltaTime;
        if (timeSinceLastRequest > cycleTime){
            CalculateDistance();
        }
    }

    private void CalculateDistance(){
        float distance = (gameObject.transform.position - CameraTransform.position).magnitude;
        distance = Mathf.Round(distance * 10.0f) * 0.1f;
        if (displayValues){
            dist.text = distance.ToString() + " m";
        }
        SetValue(min: EmissionRateMin, max: EmissionRateLimit / distance);
    }
    #endregion
}

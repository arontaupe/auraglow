#region Imports
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;
#endregion

[RequireComponent(typeof(ParticleSystem))]
public class DistanceCalculatorAttrObj : MonoBehaviour
{
    #region Variables
    private Transform AttractorTransform;
    private ParticleSystem ps;
    private ParticleSystem.EmissionModule emissionModule;
    private TextMesh dist;
    private TextMesh emissionRate;
    public bool displayValues = false;

    [Range(1.0f, 20.0f)]
    public float EmissionRateLimit = 20.0f;
    [Range(0.01f, 10.0f)]
    public float cycleTime = 1.0f;
    private float timeSinceLastRequest = 0f;
    #endregion
    #region Methods

    void Awake(){
        ps = GetComponent<ParticleSystem>();
        emissionModule = ps.emission;
        AttractorTransform = GameObject.Find("Attractor").transform;
        emissionRate = transform.Find("EmissionRate").GetComponent<TextMesh> ();  
        dist = transform.Find("DistanceAttractor").GetComponent<TextMesh>();
    }

    void SetValue(float hue = 1.0f){
        hue = Mathf.Clamp(hue, 0.0f, 5.0f) / 5.0f;

        var main = ps.main;
        main.startColor = Color.HSVToRGB(hue, 1.0f, 1.0f);
    }
    
    void Update(){
        timeSinceLastRequest += Time.deltaTime;
        if (timeSinceLastRequest > cycleTime){
            CalculateDistance();
        } 
    }

    private void CalculateDistance()
    {
        float distance = (AttractorTransform.position - gameObject.transform.position).magnitude;
        distance = Mathf.Round(distance * 10.0f) * 0.1f;
        if (displayValues){
            dist.text = distance.ToString() + " m";
        }
        SetValue(distance);
    }
    #endregion
}

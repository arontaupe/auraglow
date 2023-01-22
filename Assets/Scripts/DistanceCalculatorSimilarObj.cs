using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;
using System.Linq;


public class DistanceCalculatorSimilarObj : MonoBehaviour
{
    public Text DistanceText;
    public Text EmissionRate;
    private Transform thisTransform;
    ParticleSystem aura;
    ParticleSystem.EmissionModule emissionModule;
    public float EmissionRateLimit = 20.0f;
    private GameObject[] similars;


    
    // Start is called before the first frame update
    void Start(){
        aura = GetComponent<ParticleSystem>();
        emissionModule = aura.emission;
        thisTransform = gameObject.transform;
    }

    private float CalculateAvgDistance(string tag = "aura"){
        if (similars == null){
            similars = GameObject.FindGameObjectsWithTag(tag);
        }

        List<float> distances = new List<float>();

        foreach (GameObject similar in similars)
        {
            float distance = (similar.transform.position - thisTransform.position).magnitude;
            distances.Add(distance);
        }
        float average = distances.Average();
        return average;
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
        float average = CalculateAvgDistance();
        SetValue(0.0f,average);
    }
}

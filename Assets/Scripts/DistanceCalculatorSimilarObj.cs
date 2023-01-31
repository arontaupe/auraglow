using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;
using System.Linq;


public class DistanceCalculatorSimilarObj : MonoBehaviour
{
    private Text DistanceSimilarText;
    private Text ColorText;
    private ParticleSystem ps;
    public float EmissionRateLimit = 10.0f;
    public string searchtag = "aura";
    private GameObject[] similars;
    private float average = 1.0f;

    void Awake(){
        ps = GetComponent<ParticleSystem>();
        DistanceSimilarText = GameObject.Find("DistanceSimilar").GetComponent<Text>();
        ColorText = GameObject.Find("Color").GetComponent<Text> ();
    }

    private float CalculateAvgDistance(){
        if (similars == null){
            similars = GameObject.FindGameObjectsWithTag(searchtag);
        }
        
        if (similars.Any()){
            List<float> distances = new List<float>();

            foreach (GameObject similar in similars)
            {
                float distance = (similar.transform.position - transform.position).magnitude;
                distances.Add(distance);
            }
            average = distances.Average();
        }
        return average;
    }

    void SetValue(float hue = 1.0f){
        hue = Mathf.Clamp(hue, 0.0f, 5.0f) / 5.0f;

        var main = ps.main;
        main.startColor = Color.HSVToRGB(hue, 1.0f, 1.0f);
        ColorText.text = string.Format("hue {0} ", hue);
    }
    
    void Update(){
        average = CalculateAvgDistance();
        SetValue(average);
    }
}

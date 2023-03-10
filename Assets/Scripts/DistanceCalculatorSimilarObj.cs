using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;
using System.Linq;


[RequireComponent(typeof(ParticleSystem))]
public class DistanceCalculatorSimilarObj : MonoBehaviour
{
    #region Variables
    private Text DistanceSimilarText;
    private Text ColorText;
    private ParticleSystem ps;
    public bool invert = false;
    [Range(0.0f,1.0f)]
    public float hue = 0.15f;
    public bool s_or_v = true;
    public string searchtag = "aura";
    private GameObject[] similars;
    private float average = 1.0f;
    public bool displayValues = false;
    [Range(0.01f, 10.0f)]
    public float cycleTime = 1.0f;
    private float timeSinceLastRequest = 0f;
    #endregion

    #region Methods
    void Awake(){
        ps = GetComponent<ParticleSystem>();
        DistanceSimilarText = GameObject.Find("DistanceSimilar").GetComponent<Text>();
        ColorText = GameObject.Find("Color").GetComponent<Text> ();
    }

    private float CalculateAvgDistance(){

        similars ??= GameObject.FindGameObjectsWithTag(searchtag);
        
        if (similars.Any()){
            List<float> distances = new List<float>();

            foreach (GameObject similar in similars)
            {
                float distance = (similar.transform.position - transform.position).magnitude;
                distances.Add(distance);
            }
            average = distances.Average();
            return average;
        }
        return 1.0f;
    }

    void SetValue(float sat = 1.0f){
        sat = Mathf.Clamp(sat, 0.0f, 5.0f) / 5.0f;
        if(invert){
            sat = 1/sat;
        }

        var main = ps.main;
        if(s_or_v){
            main.startColor = Color.HSVToRGB(hue,sat,1.0f);
        }
        if(!s_or_v){
            main.startColor = Color.HSVToRGB(hue,1.0f, sat );
        }
        if(displayValues){
            ColorText.text = string.Format("Color {0} ", sat);
        }
    }
    
    void Update(){
        timeSinceLastRequest += Time.deltaTime;
        if (timeSinceLastRequest > cycleTime){
            average = CalculateAvgDistance();
            SetValue(average);
        }
    }
    #endregion
}

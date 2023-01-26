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
    private ParticleSystem aura;
    private ParticleSystem.MainModule mainModule;
    public float EmissionRateLimit = 10.0f;
    private GameObject[] similars;
    private float average = 1.0f;

    
    // Start is called before the first frame update
    void Start(){
        aura = GetComponent<ParticleSystem>();
        mainModule = aura.main;
        DistanceSimilarText = GameObject.Find("DistanceSimilar").GetComponent<Text>();
        ColorText = GameObject.Find("Color").GetComponent<Text> ();
    }

    private float CalculateAvgDistance(string tag = "aura"){
        if (similars == null){
            similars = GameObject.FindGameObjectsWithTag(tag);
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
        mainModule.startColor = Color.HSVToRGB(hue, 1.0f, 1.0f);
        ColorText.text = string.Format("hue {0} ", hue);
    }
    
    // Update is called once per frame
    void Update(){
        average = CalculateAvgDistance();
        SetValue(average);
    }
}

using System;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.TestTools;
using static UnityEngine.ParticleSystem;

public class FixationCalculator : MonoBehaviour
{
    #region Public Variables
    public GameObject fixPointPrefab;
    public List<GameObject> fixPoints;
    [Range(1, 50)]
    public int NumberOfFixPoints = 10;
    [Range(1, 5)]
    public int noiseMultiplier = 10;
    [Range(0.01f, 2.0f)]
    public float cycleTime = 0.2f;


    #endregion

    #region Private Variables
    private Vector3 _heading;
    private float timeSinceLastRequest = 0f;
    private ParticleSystem ps;
    private ParticleSystem.NoiseModule noiseModule;



    private float average = 1.0f;
    #endregion

    #region Unity Methods
#if PLATFORM_LUMIN
    void Start(){
        MLEyes.Start();
        StartCoroutine(CheckFixation());
    }

    void Update(){
        timeSinceLastRequest += Time.deltaTime;
        if (timeSinceLastRequest > cycleTime)
        {
            average = CalculateAverageDistance();
            SetValue(average);
        }
    }
#endif
    void Awake()
    {
        ps = GetComponent<ParticleSystem>();
        noiseModule = ps.noise;
    }

    void SetValue(float dist = 1.0f){
        dist = Mathf.Clamp(dist, 0.0f, 3.0f) / 3.0f;

        noiseModule.strength = new ParticleSystem.MinMaxCurve(0.5f, dist * noiseMultiplier);
        //Debug.Log(String.Format("Set Noise to {0}", dist));
    }

    private WaitForSeconds refreshIntervalWait = new WaitForSeconds(0.1f);
    IEnumerator CheckFixation()
    {
        while (true)
        {
            Vector3 fixPoint = MLEyes.FixationPoint;
            GameObject fixInstance = Instantiate(fixPointPrefab, fixPoint, Quaternion.identity);
            //Destroy(fixInstance, 0.2f);
           
            //Debug.Log("Placed Fixpoint");
            fixPoints.Add(fixInstance);

            while(fixPoints.Count > NumberOfFixPoints)
            {
                Destroy(fixPoints[0]);
                fixPoints.RemoveAt(0);
            }
            yield return refreshIntervalWait;
        }
    }

    private float CalculateAverageDistance()
    {
        if(fixPoints.Any())
        {
            List<float> distances = new List<float>();

            foreach (GameObject point in fixPoints)
            {
                float distance = (point.transform.position - transform.position).magnitude;
                distances.Add(distance);
            }
            average = distances.Average();
        }
        return average;
    }
    #endregion
}

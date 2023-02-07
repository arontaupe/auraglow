using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;
using UnityEngine.TestTools;
using UnityEngine.XR.MagicLeap;

public class HandFollowScript : MonoBehaviour
{
    public GameObject handPrefab;

    [Range(0.01f, 1.0f)]
    public float cycleTime = 0.05f;
    private float timeSinceLastRequest = 0f;
    private bool instantiatedLeft = false;
    private bool instantiatedRight = false;
    private GameObject handInstanceLeft;
    private GameObject handInstanceRight;

    // Start is called before the first frame update
    void Start()
    {
        MLHandTracking.Start();
    }

    // Update is called once per frame
    void Update()
    {
        timeSinceLastRequest += Time.deltaTime;
        if (timeSinceLastRequest > cycleTime)
        {
            if (!instantiatedLeft)
            {
                handInstanceLeft = Instantiate(handPrefab, MLHandTracking.Left.Center, Quaternion.identity);
                instantiatedLeft = true;
            }
            else
            {
                MoveHand(handInstanceLeft, MLHandTracking.Left.Center);
            }
            if (!instantiatedRight)
            {
                handInstanceRight = Instantiate(handPrefab, MLHandTracking.Right.Center, Quaternion.identity);
                instantiatedRight = true;
            }
            else
            {
                MoveHand(handInstanceRight, MLHandTracking.Right.Center);
            }
        }
    }
    private void MoveHand(GameObject handInstance, Vector3 point)
    {
        handInstance.transform.position = Vector3.Lerp(handInstance.transform.position, point, 0.5f);
    }

}

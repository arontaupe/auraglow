using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class HandTrackingSnippet : MonoBehaviour
{
    public GameObject prefab;
    public Material material;

    private List<MLHandTracking.KeyPoint> _keypoints = new List<MLHandTracking.KeyPoint>();
    private List<GameObject> _trackingPoints = new List<GameObject>();
    private List<MLHandTracking.Hand> _hands = new List<MLHandTracking.Hand>();
    private float _keyPoseConfidence = 0.9f;

    // List of the KeyPoses we will try to detect.
    private MLHandTracking.HandKeyPose[] _keyPoses = { MLHandTracking.HandKeyPose.Fist,
                                                       MLHandTracking.HandKeyPose.C,
                                                       MLHandTracking.HandKeyPose.L,
                                                       MLHandTracking.HandKeyPose.Pinch,
                                                       MLHandTracking.HandKeyPose.Ok };

    void Start()
    {
        // Start Hands
        MLHandTracking.Start();

        // List with left and Right hands
        _hands.Add(MLHandTracking.Left);
        _hands.Add(MLHandTracking.Right);

        // Filter parameters.
        MLHandTracking.KeyPoseManager.SetKeyPointsFilterLevel(MLHandTracking.KeyPointFilterLevel.ExtraSmoothed);
        MLHandTracking.KeyPoseManager.SetPoseFilterLevel(MLHandTracking.PoseFilterLevel.ExtraRobust);

        // Enable keypose detection
        MLHandTracking.KeyPoseManager.EnableKeyPoses(_keyPoses, true, true);

        // Setup the keypoints and prefab spheres to visualize them.
        Setup();
    }

    void OnDestroy()
    {
        // Stop Hands
        MLHandTracking.Stop();
    }

    void Update()
    {
        // Update keypoint positions
        for (var i = 0; i < _keypoints.Count; ++i)
        {
            _trackingPoints[i].transform.localPosition = _keypoints[i].Position;
        }

        // Change the material color when keyPose on the list is detected
        material.color = Color.cyan;
        foreach (MLHandTracking.Hand hand in _hands)
        {
            if (hand.HandKeyPoseConfidence > _keyPoseConfidence)
            {
                foreach (MLHandTracking.HandKeyPose keyPose in _keyPoses)
                {
                    if (hand.KeyPose == keyPose)
                    {
                        material.color = Color.red;
                    }
                }
            }
        }
    }
    void Setup()
    {
        // Add the keypoints into a list.
        foreach (MLHandTracking.Hand hand in _hands)
        {
            _keypoints.AddRange(hand.Thumb.KeyPoints);
            _keypoints.AddRange(hand.Index.KeyPoints);
            _keypoints.AddRange(hand.Middle.KeyPoints);
            _keypoints.AddRange(hand.Ring.KeyPoints);
            _keypoints.AddRange(hand.Pinky.KeyPoints);
            _keypoints.AddRange(hand.Wrist.KeyPoints);
        }

        // Instantiate a prefab sphere for each keypoint
        for (int i = 0; i < _keypoints.Count; ++i)
        {
            GameObject newObject = Instantiate(prefab, _keypoints[i].Position,
                Quaternion.identity);
            _trackingPoints.Add(newObject);
        }
    }
}
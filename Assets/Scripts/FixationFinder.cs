using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.XR.MagicLeap;

public class FixationFinder : MonoBehaviour
{
    #region Public Variables
    public GameObject fixPoint;
    public GameObject Camera;
    #endregion

    #region Private Variables
    private Vector3 _heading;
    #endregion

    #region Unity Methods
#if PLATFORM_LUMIN
    void Start(){
        MLEyes.Start();
        StartCoroutine(CheckFixation());
    }

    private WaitForSeconds refreshIntervalWait = new WaitForSeconds(0.1f);
    IEnumerator CheckFixation(){
        while (true){
            Destroy(Instantiate(fixPoint, MLEyes.FixationPoint, Quaternion.identity), 0.1f);
            yield return refreshIntervalWait;
        }
    }
#endif
#endregion
}

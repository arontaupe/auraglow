#region Imports
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
#endregion

[RequireComponent(typeof(LineRenderer))]
public class DynamicBeam : MonoBehaviour
{
    #region Variables
    private MLInput.Controller controller;
    private LineRenderer beamLine;
    #endregion

    #region Methods
    #if PLATFORM_LUMIN
    void Start(){
        controller = MLInput.GetController(MLInput.Hand.Left);
        beamLine = GetComponent<LineRenderer>();
    }
    #endif

    #if PLATFORM_LUMIN
    void Update(){
        if(controller != null){
            transform.SetPositionAndRotation(controller.Position, controller.Orientation);

            RaycastHit hit;
            if (Physics.Raycast(transform.position, transform.forward, out hit)){
                beamLine.useWorldSpace = true;
                beamLine.SetPosition(0, transform.position);
                beamLine.SetPosition(1, hit.point);
            }
            else{
                beamLine.useWorldSpace = true;
                beamLine.SetPosition(0, transform.position);
                beamLine.SetPosition(1, transform.forward * 5);
            }
        }
    }
    #endif
    #endregion
}
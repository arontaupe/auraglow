using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.MagicLeap;
using static UnityEngine.ParticleSystem;

[RequireComponent(typeof(ParticleSystem))]
public class CollisionManager : MonoBehaviour
{
    private ParticleSystem aura;
    private ParticleSystem.CollisionModule collisionModule;
    private Transform collisionTarget;

    void Start(){
        
    }

    void Awake()
    {
        aura = GetComponent<ParticleSystem>();
        collisionModule = aura.collision;
        collisionModule.enabled = true;
        collisionModule.bounce = 0.5f;
        collisionTarget = GameObject.Find("ControlPointer").transform;

    }
    void SetPlane()
    {
        var collider = GameObject.CreatePrimitive(PrimitiveType.Plane);
        //collider.transform.parent = aura.transform;
        collider.transform.SetPositionAndRotation(collisionTarget.position, collisionTarget.rotation);
        collisionModule.SetPlane(0, collider.transform);
    }

    void Update(){
        SetPlane();
    }
}

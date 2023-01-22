using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class InputManager : MonoBehaviour
{
    private MLInput.Controller controller;
    public GameObject controllerInput;

    // Start is called before the first frame update
    void Start()
    {
        MLInput.Start();
        controller = MLInput.GetController(MLInput.Hand.Left);

        MLInput.OnControllerButtonDown += OnButtonDown;
        MLInput.OnControllerButtonUp += OnButtonUp;

        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }


    void OnButtonDown(byte controllerId, MLInput.Controller.Button button) {

    }
    void OnButtonUp(byte controllerId, MLInput.Controller.Button button) {

        if (button == MLInput.Controller.Button.HomeTap)
        {
            SceneManager.LoadScene("MainMenuScene");
            Scene scene = SceneManager.GetActiveScene();
            Debug.Log(scene.name);
        }
    }
 
    private void OnDestroy()
    {
        MLInput.Stop();
    }
}

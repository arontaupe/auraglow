using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    private MLInput.Controller controller;
    public GameObject HeadlockedCanvas;
    public GameObject controllerInput;

    // Start is called before the first frame update
    void Start()
    {
       MLInput.Start();
       controller = MLInput.GetController(MLInput.Hand.Left);
       Scene scene = SceneManager.GetActiveScene();
       Debug.Log(scene.name);
    }

    // Update is called once per frame
    void Update()
    {
        if(controller.TriggerValue > 0.5f){
            RaycastHit hit;
            if(Physics.Raycast(controllerInput.transform.position,      controllerInput.transform.forward, out hit)){
                
                if(hit.transform.gameObject.name == "StartButton"){
                    StartApp();
                }
                if(hit.transform.gameObject.name == "MarkerButton"){
                    StartMarker();
                }

                if(hit.transform.gameObject.name == "RecognitionButton"){
                    StartRecognition();
                }
                
                if(hit.transform.gameObject.name == "LightningButton"){
                    StartLuminance();
                }

                if(hit.transform.gameObject.name == "QuitButton"){
                    QuitApp();
                }
                                if(hit.transform.gameObject.name == "PlanesButton"){
                    StartPlanes();
                }
            }
        }
    }
    void StartPlanes(){
        HeadlockedCanvas.SetActive(false);
        SceneManager.LoadScene("PlanesScene");
        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }
    void StartMarker(){
        HeadlockedCanvas.SetActive(false);
        SceneManager.LoadScene("ArUcoTrackingScene");
        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }
        void StartLuminance(){
        HeadlockedCanvas.SetActive(false);
        SceneManager.LoadScene("LuminanceScene");
        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }
    void StartApp(){
        HeadlockedCanvas.SetActive(false);
        SceneManager.LoadScene("DemoScene");
        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }
    void StartRecognition(){
        HeadlockedCanvas.SetActive(false);
        SceneManager.LoadScene("ImageTrackingScene");
        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }

    void QuitApp(){
        HeadlockedCanvas.SetActive(false);
        Application.Quit();
    }
    private void OnDestroy()
    {
        MLInput.Stop();
    }
}

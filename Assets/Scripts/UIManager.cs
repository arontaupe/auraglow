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
            if(Physics.Raycast(controllerInput.transform.position, controllerInput.transform.forward, out hit)){
                
                if(hit.transform.gameObject.name == "PlayButton"){
                    StartApp();
                }
                if(hit.transform.gameObject.name == "GalleryButton"){
                    StartGallery();
                }
                if(hit.transform.gameObject.name == "QuitButton"){
                    QuitApp();
                }                             
            }
        }
    }

    void StartGallery(){
        HeadlockedCanvas.SetActive(false);
        SceneManager.LoadScene("GalleryScene");
        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }

    void StartApp(){
        HeadlockedCanvas.SetActive(false);
        SceneManager.LoadScene("FullAuraticScene");
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

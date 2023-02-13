using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    #region Private Variables
    private MLInput.Controller controller;
    private bool gestureactive = false;
    #endregion

    #region Public Variables
    public GameObject HeadlockedCanvas;
    public GameObject controllerInput;
    #endregion

    #region Private Methods
    void Start(){
       MLInput.Start();
       controller = MLInput.GetController(MLInput.Hand.Left);
        //MLInput.OnControllerButtonUp += OnButtonUp;

       Scene scene = SceneManager.GetActiveScene();
       Debug.Log(scene.name);
    }

    void Update(){
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
        
        
        if(controller.TouchpadGestureState.ToString() == "Start" && !gestureactive){
            Debug.Log(controller.TouchpadGestureState.ToString());
            gestureactive = true;
        }

        if(controller.TouchpadGestureState.ToString() == "End" && gestureactive){
            Debug.Log(controller.CurrentTouchpadGesture.Direction.ToString());
            gestureactive = false;


            if(controller.CurrentTouchpadGesture.Direction.ToString() == "Up"){
                StartApp();
            }
            if(controller.CurrentTouchpadGesture.Direction.ToString() == "Down"){
                StartGallery();
            }
            if(controller.CurrentTouchpadGesture.Direction.ToString() == "Right"){
                QuitApp();
            }
            
        }
       
    }
/*
    void OnButtonUp(byte controllerId, MLInput.Controller.Button button) {
        if (button == MLInput.Controller.Button.HomeTap){
            StartGallery();
        }
        if (button == MLInput.Controller.Button.Bumper){
            StartApp();
        }
    }
    */  

    void StartGallery(){
        //HeadlockedCanvas.SetActive(false);
        SceneManager.LoadScene("GalleryScene");
        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }

    void StartApp(){
        //HeadlockedCanvas.SetActive(false);
        SceneManager.LoadScene("FullAuraticScene");
        Scene scene = SceneManager.GetActiveScene();
        Debug.Log(scene.name);
    }
    void QuitApp(){
        //HeadlockedCanvas.SetActive(false);
        Application.Quit();
    }
    private void OnDestroy(){
        MLInput.Stop();
    }
    #endregion
}

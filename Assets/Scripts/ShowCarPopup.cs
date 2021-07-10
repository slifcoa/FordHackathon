using System;
using System.Collections;
using System.Collections.Generic;
using API;
using Doozy.Engine.UI;
using UnityEngine;
using UnityEngine.PlayerLoop;
using UnityEngine.UI;

public class ShowCarPopup : MonoBehaviour
{
    private APIController api;
    private MyCar car;

    public string lockStr = "Lock";
    public string unlockStr = "Unlock";
    public string engineOnStr = "ON";
    public string engineOffStr = "OFF";
    public string showTirePressure = "Show Tire Pressure";
    
    public string PopupName = "CarControls";

    public string title = "Car Controls";
    
    private bool lockStatus;
    private bool engineStatus;

    private bool[] doorsStatus;
    
    public bool LockStatus
    {
        get => lockStatus;
        set
        {
            if (value != lockStatus)
            {
                lockStatus = value;  
                if(PopupShowing())
                    UpdatePopupTitles();
            }
        }
    }
    
    public bool EngineStatus
    {
        get => engineStatus;
        set
        {
            if (value != engineStatus)
            {
                engineStatus = value;
                if(PopupShowing())
                    UpdatePopupTitles();
                   
            }
        }
    }
    
    /// <summary>
    /// Reference to the UIPopup clone used by this script
    /// </summary>
    private UIPopup m_popup;

    // Start is called before the first frame update
    void Start()
    {
        api = GameObject.Find("API").GetComponent<APIController>();
        car = GameObject.Find("CarModel").GetComponent<MyCar>();
        
        LockStatus = api.GetLockStatus();
        EngineStatus = api.GetEngineStatus();
        doorsStatus = api.GetDoorsStatus();
        
        car.SetCarIgnition(EngineStatus);

    }

    public void ShowCarControls()
    {
        m_popup = UIPopup.GetPopup(PopupName);
        if (m_popup == null)
            return;
        m_popup.Data.SetLabelsTexts(title);
        UpdatePopupTitles();
        m_popup.Data.SetButtonsCallbacks(LockButtonClicked, EngineButtonClicked, TirePressureButtonClicked);
        
        m_popup.HideOnClickOverlay = true;
        m_popup.Show();
    }

    void LockButtonClicked()
    {
        Debug.Log("Lock Button: " + lockStatus);
        LockStatus = !lockStatus;
    }

    void EngineButtonClicked()
    {
        Debug.Log("Engine Ignition: " + engineStatus);
        EngineStatus = !engineStatus;
        car.SetCarIgnition(EngineStatus);
    }

    void TirePressureButtonClicked()
    {
        Debug.Log("Show Tire Pressue");
        
    }

    bool PopupShowing()
    {
        if (m_popup == null)
            return false;

        if (m_popup.IsVisible)
            return true;

        return false;
    }

    void UpdatePopupTitles()
    {
        var lockTxt = lockStatus ? unlockStr : lockStr;
        var engineTxt = engineStatus ? engineOnStr : engineOffStr;

        lockTxt = string.Format("Doors: \n {0}", lockTxt);
        engineTxt = string.Format("Ignition: \n {0}", engineTxt);
        
        m_popup.Data.SetButtonsLabels(lockTxt, engineTxt, showTirePressure);
    }


    private void ClosePopup()
    {
        if (m_popup != null) m_popup.Hide();
    }
}

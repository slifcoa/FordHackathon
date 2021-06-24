using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MyCarUI : MonoBehaviour
{
    [SerializeField] private MyCar myCar;
    [SerializeField] private TextMeshProUGUI titleUI;
    [SerializeField] private Button toggleEngineUI;
    [SerializeField] private Button toggleLockingUI;

    [SerializeField] private Button showTirePressureUI;
    
    // Start is called before the first frame update
    void Start()
    {
        showTirePressureUI.onClick.AddListener(ShowTirePressure);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void ShowTirePressure() {
        Debug.Log("Show Tire Pressure");

    }
}

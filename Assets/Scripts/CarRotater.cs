using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CarRotater : MonoBehaviour
{
    public Slider mySlider;

    private Transform carouselTrans;
    // Start is called before the first frame update
    void Start()
    {
        carouselTrans = GameObject.Find("Carousel").transform;
        mySlider.onValueChanged.AddListener(RotateCar);
    }

    // Update is called once per frame
    void RotateCar(float new_val)
    {
        var orig = carouselTrans.localEulerAngles;
        carouselTrans.localEulerAngles = new Vector3(orig.x, new_val * 360.0f, orig.z) ;
    }
}

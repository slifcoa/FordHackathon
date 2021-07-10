using System.Collections;
using System.Collections.Generic;
using API;
using UnityEngine;

public class MyActivityManager : MonoBehaviour
{
    private APIController api;

    public MyActivityUI ui;
    // Start is called before the first frame update
    void Start()
    {
        api = GameObject.Find("API").GetComponent<APIController>();
        var image = api.carThumbnail;
        ui.CarThumbnail = image;
    }
}

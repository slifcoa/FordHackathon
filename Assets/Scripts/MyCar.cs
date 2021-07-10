using System;
using System.Collections;
using System.Collections.Generic;
using Doozy.Engine.UI.Animation;
using UnityEngine;

public class MyCar : MonoBehaviour
{
    public Transform myCarModel;

    public Transform m_tiresModel;

    private Transform m_selectedPart;

    public bool rotateLeft = false;
    public bool rotateRight = false;
    public bool rotateUp = false;
    public bool rotateDown = false;

    public GameObject[] exhaust;

    // Update is called once per frame
    void Update()
    {
        if (rotateLeft) {
            RotateVehicle(Vector3.up);
        }

        if (rotateRight)
        {
            RotateVehicle(Vector3.down);
        }

        if (rotateUp)
        {
            RotateVehicle(Vector3.right);
        }

        if (rotateDown)
        {
            RotateVehicle(Vector3.left);
        }
    }

    protected internal void SelectTires() {
        SetSelectedPart(m_tiresModel);
    }

    void SetSelectedPart(Transform t) {
        if (m_selectedPart != null)
            HighlightPart(m_selectedPart, false);

        m_selectedPart = t;
        HighlightPart(t, true);
    }

    void HighlightPart(Transform t, bool b) {
        if (b)
            Debug.Log("Highlight");
        //Highlight
        else
            Debug.Log("Unhighlight");
            //Unhighlight
    }

    public void RotateVehicle(Vector3 dir)
    {
        myCarModel.Rotate(dir, Space.World);
    }

    public void SetCarIgnition(bool b)
    {
        foreach (var e in exhaust)
            e.SetActive(b);
    }




}

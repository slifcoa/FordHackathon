using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyCar : MonoBehaviour
{
    public Transform myCarModel;

    public Transform m_tiresModel;

    private Transform m_selectedPart;
   
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.LeftArrow)) {
            myCarModel.Rotate(Vector3.up, Space.World);
        }

        if (Input.GetKey(KeyCode.RightArrow))
        {
            myCarModel.Rotate(Vector3.down, Space.World);
        }

        if (Input.GetKey(KeyCode.UpArrow))
        {
            myCarModel.Rotate(Vector3.right, Space.World);
        }

        if (Input.GetKey(KeyCode.DownArrow))
        {
            myCarModel.Rotate(Vector3.left, Space.World);
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

    

    
}

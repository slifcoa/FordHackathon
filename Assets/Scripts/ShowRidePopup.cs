using System.Collections;
using System.Collections.Generic;
using Doozy.Engine.UI;
using UnityEngine;

public class ShowRidePopup : MonoBehaviour
{
    private UIPopup m_popup;

    private void ClosePopup()
    {
        if (m_popup != null) m_popup.Hide();
    }

    public void ShowRide()
    {
        m_popup = UIPopup.GetPopup("RidePopup");
        if (m_popup == null)
            return;

        m_popup.HideOnClickOverlay = true;
        m_popup.Show();
    }
}

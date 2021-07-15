using System.Collections;
using System.Collections.Generic;
using Doozy.Engine.UI.Nodes;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RideActivityUI : MonoBehaviour
{
    [SerializeField] private Image avatarImg;
    [SerializeField] private TextMeshProUGUI nameTxt;
    [SerializeField] private TextMeshProUGUI rideDescTxt;

    private Sprite avatar;
    private string username;
    private string rideDesc;

    public Sprite Avatar
    {
        get => avatar;
        set
        {
            avatar = value;
            avatarImg.sprite = value;
        }
    }

    public string Username
    {
        get => username;
        set
        {
            username = value;
            nameTxt.text = value;
        }
    }

    public string RideDesc
    {
        get => rideDesc;
        set
        {
            rideDesc = value;
            rideDescTxt.text = value;
        }

    }
}

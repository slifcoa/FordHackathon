using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CarpoolActivityUI : MonoBehaviour
{
    public Image driverSpriteImg;
    public Image passengerSpriteImg;
    public TextMeshProUGUI driverUsernameUI;
    public TextMeshProUGUI descUI;

    private Sprite driverAvt;
    private Sprite passAvt;
    private string driverUsername;
    private string desc;

    public Sprite DriverAvt
    {
        get => driverAvt;
        set
        {
            driverAvt = value;
            driverSpriteImg.sprite = value;
        }
    }
    
    public Sprite PassAvt
    {
        get => passAvt;
        set
        {
            passAvt = value;
            passengerSpriteImg.sprite = value;
        }
    }

    public string DriverUsername
    {
        get => driverUsername;
        set
        {
            driverUsername = value;
            driverUsernameUI.text = value;
        }
    }

    public string Description
    {
        get => desc;
        set
        {
            desc = value;
            descUI.text = value;
        }
    }
}

using Doozy.Engine.UI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class FriendUI : MonoBehaviour
{

    [SerializeField] private Image avatarImg;
    [SerializeField] private TextMeshProUGUI usernameTxt;
    [SerializeField] private TextMeshProUGUI handleTxt;

    private Sprite avatar;
    private string username;
    private string handle;

    public UIView rideWithFriendView;
    public UIView rideOptionPrompt;

    public TextMeshProUGUI rideOptionPromptTitle;

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
            usernameTxt.text = value;
        }
    }

    public string Handle
    {
        get => handle;
        set
        {
            handle = value;
            handleTxt.text = value;  
        }
    }

    public void LoadFriendRideOptions()
    {
        Debug.Log("Show Friend Ride");
        rideWithFriendView.gameObject.SetActive(true);

        rideWithFriendView.Show();
    }

    public void HideFriendRideOptions()
    {
        rideWithFriendView.Hide();
    }

    public void PickUpFriend()
    {
        rideOptionPromptTitle.text = "Pick up <b> John Doe </b> ?";
        rideOptionPrompt.Show();
    }

    public void NotifyWhenHome()
    {
        rideOptionPromptTitle.text = "Get notified when <b> John Doe </b> is Home?";
        rideOptionPrompt.Show();
    }

    public void HideRideOptionsPrompt()
    {
        rideOptionPrompt.Hide();
    }


}

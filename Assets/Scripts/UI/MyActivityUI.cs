using UnityEngine;
using UnityEngine.UI;
public class MyActivityUI : MonoBehaviour
{
    public RawImage carThumbnailUI;

    private Texture2D carThumbnail;

    public Texture2D CarThumbnail
    {
        get => carThumbnail;
        set
        {
            carThumbnail = value;
            carThumbnailUI.texture = value;
        }

    }
}

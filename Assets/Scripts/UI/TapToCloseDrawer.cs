using Doozy.Engine.UI;
using UnityEngine;

[RequireComponent(typeof(UIDrawer))]
public class TapToCloseDrawer : MonoBehaviour
{
    private UIDrawer myDrawer;
    // Start is called before the first frame update
    void Start()
    {
        myDrawer = GetComponent<UIDrawer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (myDrawer.Opened)
        {
            if (Input.GetMouseButtonUp(0))
            {
                var input = Input.mousePosition.x;
                /*if (input.phase == TouchPhase.Ended)
                {*/
                    var emptySpace = Screen.width * (1 - myDrawer.Container.PercentageOfScreen);
                    if (input < emptySpace)
                    {
                        myDrawer.Close();
                    }
//                }
            }
        }
    }
}

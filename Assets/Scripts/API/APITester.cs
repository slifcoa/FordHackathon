
using UnityEngine;

public class APITester : MonoBehaviour
{
    [ContextMenu("Get Vehicle Command Status")]
    void TestGetVehicleCommandStatus() {
        var test = APIHelper.GetUnlockCommandStatus();
        Debug.Log(test);
    }
}   

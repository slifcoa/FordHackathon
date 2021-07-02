
namespace API.JsonObjects.VehicleCommands
{
    [System.Serializable]
    public class UnlockVehicle
    {
        public string status;
        public string commandStatus;
        public string commandId;

        public override string ToString()
        {
            return string.Format("status: {0} \n commandStatus: {1} \n commandId: {2}", status, commandStatus, commandId);
        }
    }
}

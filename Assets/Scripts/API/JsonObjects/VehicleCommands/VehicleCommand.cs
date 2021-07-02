namespace API.JsonObjects.VehicleCommands
{
    [System.Serializable]
    public class VehicleCommand
    {
        public string status;
        public string commandStatus;
        public string commandId;

        public override string ToString()
        {
            return $"Status: {status} Command Status: {commandStatus} Command Id: {commandId}";
        }
    }
}
public class GetVehicleStatus
{
    public string status;
    public string commandStatus;
    public string commandId;
    public VehicleInfo vehiclestatus;

    [System.Serializable]
    public struct VehicleInfo
    {
        public InfoElement lockStatus;
        public InfoElement alarm;
        
        [System.Serializable]
        public struct InfoElement
        {
            public string timestamp;
            public string value;

            public override string ToString()
            {
                return string.Format("timestamp: {0}, value: {1}", timestamp, value);
            }
        }

        public override string ToString()
        {
            return string.Format("Lock Status: {0} \n Alarm: {1} \n", lockStatus, alarm);
        }
    }

    public override string ToString()
    {
        return string.Format("Status: {0} \n Command Status: {1} \n Command Id: {2} \n Vehicle Status: {3} \n", status,
            commandStatus, commandId, vehiclestatus);
    }
}

[System.Serializable]
public class GetVehicleInformation
{
    public string status;
    public Vehicle vehicle;
    
    [System.Serializable]
    public struct Vehicle
    {
        public string vehicleId;
        public string make;
        public string modelName;
        public string modelYear;
        public string color;
        public string nickName;
        public string modemEnabled;
        public string lastUpdated;
        public string vehicleAuthorizationIndicator;
        public string serviceCompatible;
        public string engineType;
        public VehicleDetails vehicleDetails;
        public VehicleStatus vehicleStatus;
        public VehicleLocation vehicleLocation;
        
        [System.Serializable]
        public struct VehicleDetails
        {
            public VehicleDetailElement fuelLevel;
            public VehicleDetailElement batteryChargeLevel;
            public string mileage;
            public string odometer;

            [System.Serializable]
            public struct VehicleDetailElement
            {
                public string value;
                public string distanceToEmpty;
                public string timestamp;
            }
        }

        [System.Serializable]
        public struct VehicleStatus
        {
            public string tirePressureWarning;
            public string deepSleepInProgress;
            public string firmwareUpgradeInProgress;
            public RemoteStartStatus remoteStartStatus;
            public ChargingStatus chargingStatus;
            public PlugStatus plugStatus;
            public IgnitionStatus ignitionStatus;
            public DoorStatus[] doorStatus;

            [System.Serializable]
            public struct RemoteStartStatus
            {
                public string status;
                public string duration;
                public string timestamp;
            }

            [System.Serializable]
            public struct ChargingStatus
            {
                public string value;
                public string timeStamp;
                public string chargeStartTime;
                public string chargeEndTime;
            }

            [System.Serializable]
            public struct PlugStatus
            {
                public string value;
                public string timeStamp;
            }

            [System.Serializable]
            public struct IgnitionStatus
            {
                public string value;
                public string timeStamp;
            }


        }


    }
}

[System.Serializable]
public struct DoorStatus
{
    public string vehicleDoor;
    public string value;
    public string vehicleOccupantRole;
    public string timeStamp;
}

[System.Serializable]
public struct VehicleLocation
{
    
    public string longitude;
    public string latitude;
    public string speed;
    public string direction;
    public string timeStamp;

    public override string ToString()
    {
        return
            $"Longitude: {longitude} \n Latitude: {latitude} \n Speed: {speed} \n Direction: {direction} \n TimeStamp: {timeStamp}";
    }
}

[System.Serializable]
public struct GetVehicleLocation
{
    public string status;
    public VehicleLocation vehicleLocation;

    public override string ToString()
    {
        return vehicleLocation.ToString();
    }
}

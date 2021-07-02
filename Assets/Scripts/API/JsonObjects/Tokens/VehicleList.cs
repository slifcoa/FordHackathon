using System.Collections;
using System.Collections.Generic;
using System.Text;


namespace  API.JsonObjects.Tokens
{
    [System.Serializable]
    public class VehicleList
    {
        public string status;
        public Vehicle[] vehicles;

        public struct Vehicle
        {
            public string vehicleId;
            public string make;
            public string modelName;
            public string modelYear;
            public string color;
            public string nickName;
            public string modemEnabled;
            public string vehicleAuthorizationIndicator;
            public string serviceCompatible;

            public override string ToString()
            {
                return string.Format(
                    "Vehicle Id: {0} Make: {1} ModelName: {2} ModelYear: {3} Color: {4} Nickname: {5} ModemEnabled: {6} VehicleAuthorizationIndicator: {7} ServiceCompatible: {8}",
                vehicleId, make, modelName, modelYear, color, nickName, modemEnabled, vehicleAuthorizationIndicator, serviceCompatible);
            }
        }

        public override string ToString()
        {
            StringBuilder str = new StringBuilder(string.Format("Status: {0} \n", status));
            foreach (var v in vehicles)
            {
                str.Append(v + "\n");
            }

            return str.ToString();
        }
    }    
}


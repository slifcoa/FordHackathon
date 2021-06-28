using System.Net;
using System.IO;
using Newtonsoft.Json;

public static class APIHelper 
{
    public static UnlockCommandStatus GetUnlockCommandStatus() {
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(https://api.mps.ford.com/api/fordconnect/vehicles/v1/{{vehicleId}}/unlock/{{UnlockcommandId}}");
        HttpWebResponse response = (HttpWebResponse)request.GetResponse();
        StreamReader reader = new StreamReader(response.GetResponseStream());
        string json = reader.ReadToEnd();
        return JsonConvert.DeserializeObject<UnlockCommandStatus>(json);
    }
}

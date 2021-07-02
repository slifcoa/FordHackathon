using System.Net;
using System.IO;
using Newtonsoft.Json;
using UnityEngine.Networking;
using UnityEngine;
using System.Collections.Generic;
using API.JsonObjects.VehicleCommands;

public static class APIHelper 
{
    public static string API_TOKEN = "eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiIsImtpZCI6IlMxUEZhdzdkR2s3bHNFQmEzUjVWMnRLSzVYYnNIWEJsemFXZGhjNUVNdW8ifQ.eyJpc3MiOiJodHRwczovL2RhaDJ2YjJjcHJvZC5iMmNsb2dpbi5jb20vOTE0ZDg4YjEtMzUyMy00YmY2LTliZTQtMWI5NmI0ZjZmOTE5L3YyLjAvIiwiZXhwIjoxNjI0OTM4MTk3LCJuYmYiOjE2MjQ5MzY5OTcsImF1ZCI6ImMxZTRjMWEwLTI4NzgtNGU2Zi1hMzA4LTgzNmIzNDQ3NGVhOSIsImxvY2FsZSI6ImVuIiwiaWRwIjoiYjJjX0RwSzFPQW44ZFEiLCJtdG1JZCI6Ijg0ZDY3ZWZhLTQxZmQtNDE4My1hNWVlLTdlNDZiMGI4ZTQ4YiIsInVzZXJHdWlkIjoiakZ2M09FY3lvN3JmaGFOVmdrenZHbVEvYjBjU1huZXp1cHRGYTlMS0EvTFhZdnNzVmtqNjkvd3RvazJUekorYSIsInN1YiI6IjNhOTRjNTFhLTMxYzEtNDRiYS05ZTQ3LTljMWQ2NGVhYWU5MiIsIm5vbmNlIjoiMTIzNDU2Iiwic2NwIjoiYWNjZXNzIiwiYXpwIjoiMzA5OTAwNjItOTYxOC00MGUxLWEyN2ItN2M2YmNiMjM2NThhIiwidmVyIjoiMS4wIiwiaWF0IjoxNjI0OTM2OTk3fQ.PWm_g6k2_KYRycMyq4FEYhf3fu6A4g6v_y4irFtueyl-Hl7CBzMyWDGLjE1Ih99UxoJCZb7Ii0jOOcxTfGivxcVRnS_ijP9ZrmnnGhgEf-lF1laG_-Cw79UFP_j2GTixD3L-k37k4OSt0udoNg90UDKwhwUlE_8K9A8WJ_PkVXjD9-f0BYhFvc4ZvvR34UzoMck3Tc0KqIY20lSkjYpoouf-HvJl7uCBTjzIbRm6b8QHZeR660g6x-ekdNNS_v_acWWPfQxptoV88ejbMQQFHHGTvLlk8WhKZFzTBWPdQhbUlMs_ulLzv0zHlq69yZQMFwkKKhF64Gd9-PICv6P0o";
    public static VehicleCommand GetUnlockCommandStatus() {
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create("https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/unlock/326f9a9a-7ca5-4102-9835-2600c2835557");
        request.Timeout = -1;
        request.Headers.Add("Application-Id", "afdc085b-377a-4351-b23e-5e1d35fb3700");
        request.Headers.Add("Authorization:", "Bearer " + API_TOKEN);
        request.Headers.Add("api-version:", "2020-06-01");
        request.Headers.Add("commandid:", "428bef27-44ef-4446-acbb-a8f92ef261c5");

        HttpWebResponse response = (HttpWebResponse)request.GetResponse();
        StreamReader reader = new StreamReader(response.GetResponseStream());
        string json = reader.ReadToEnd();
        return JsonConvert.DeserializeObject<VehicleCommand>(json);
    }
}

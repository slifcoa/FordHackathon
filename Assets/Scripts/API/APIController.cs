
using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Networking;
using API.JsonObjects.Tokens;
using API.JsonObjects.VehicleCommands;

namespace API
{
    public class APIController : MonoBehaviour
    {
        public Texture2D carThumbnail;

        void Awake()
        {
            StartCoroutine(InitStaticValues());
        }

        internal bool GetLockStatus()
        {
            return true;
        }

        internal bool GetEngineStatus()
        {
            return true;
        }

        internal bool[] GetDoorsStatus()
        {
            return Enumerable.Repeat(true, 4).ToArray();;
        }

        IEnumerator GetFordToken()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetAccessToken);

            var dict = new Dictionary<string, string>();
            dict.Add("grant_type", "authorization_code");
            dict.Add("client_id", APIHelper.CLIENT_ID);
            dict.Add("client_secret", APIHelper.CLIENT_SECRET);
            dict.Add("code", APIHelper.CODE_TOKEN);
            dict.Add("redirect_uri", "https%3A%2F%2Flocalhost%3A3000");

            CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, dict));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<FordToken>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        IEnumerator InitStaticValues()
        {
            yield return StartCoroutine(GetFordRefreshToken());
            Debug.Log("Refresh Token Received");
            yield return StartCoroutine(GetVehicleThumbnail());
            Debug.Log("Vehicle Thumbnail Received");
        }

        IEnumerator GetFordRefreshToken()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetRefreshToken);
            WWWForm form = new WWWForm();
            form.AddField("grant_type", "refresh_token");
            form.AddField("refresh_token", APIHelper.REFRESH_TOKEN);
            form.AddField("client_id", APIHelper.CLIENT_ID);
            form.AddField("client_secret", APIHelper.CLIENT_SECRET);

            CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, form));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<FordToken>(cd.result.ToString());

            Debug.Log("Data: " + data);
            APIHelper.ACCESS_TOKEN = "Bearer " + data.access_token;
        }

        IEnumerator GetVehicleList()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetVehicleList);

            var headers = new Dictionary<string, string>();

            headers.Add("Accept", APIHelper.CONT_TYPE);
            headers.Add("Content-Type", APIHelper.CONT_TYPE);
            headers.Add("api-version", APIHelper.API_VERSION);
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);

            CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleList>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        IEnumerator PostUnlockVehicle()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.PostUnlockVehicle);
            var headers = new Dictionary<string, string>();
            headers.Add("Accept", "*/*");
            headers.Add("Content-Type", APIHelper.CONT_TYPE);
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);
            headers.Add("callback-url", "{{callback-url}}");


            CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            APIHelper.commandIds[APIHelper.CommandType.UnlockVehicle] = data.commandId;
            Debug.Log("Data: " + data);
        }

        IEnumerator GetUnlockVehicle()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetUnlockVehicle, APIHelper.CommandType.UnlockVehicle);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);
            headers.Add("commandid", APIHelper.commandIds[APIHelper.CommandType.UnlockVehicle]);

            CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        IEnumerator PostLockVehicle()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.PostUnlockVehicle);
            var headers = new Dictionary<string, string>();
            headers.Add("Accept", APIHelper.CONT_TYPE);
            headers.Add("Content-Type", APIHelper.CONT_TYPE);
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            APIHelper.commandIds[APIHelper.CommandType.LockVehicle] = data.commandId;
            Debug.Log("Data: " + data);
        }

        IEnumerator GetLockVehicle()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetLockVehicle, APIHelper.CommandType.LockVehicle);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        IEnumerator PostStartEngine()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.PostStartEngine);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            APIHelper.commandIds[APIHelper.CommandType.StartEngine] = data.commandId;
            Debug.Log("Data: " + data);
        }

        IEnumerator GetStartEngine()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetStartEngine, APIHelper.CommandType.StartEngine);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        IEnumerator PostStopEngine()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.PostStopEngine);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            APIHelper.commandIds[APIHelper.CommandType.StopEngine] = data.commandId;
            Debug.Log("Data: " + data);
        }

        IEnumerator GetStopEngine()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetStopEngine, APIHelper.CommandType.StopEngine);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        IEnumerator PostWake()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.PostWake);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            //APIHelper.stopEngineCommandId = data.commandId;
            Debug.Log("Data: " + data);
        }

        IEnumerator PostVehicleStatus()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.PostVehicleStatus);
            var headers = new Dictionary<string, string>();
            headers.Add("Accept", "*/*");
            headers.Add("Content-Type", APIHelper.CONT_TYPE);
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);
            headers.Add("callback-url", "{{callback-url}}");

            CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            APIHelper.commandIds[APIHelper.CommandType.VehicleStatus] = data.commandId;
            Debug.Log("Data: " + data);
        }

        IEnumerator GetVehicleStatus()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetVehicleStatus, APIHelper.CommandType.VehicleStatus);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<GetVehicleStatus>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        IEnumerator GetVehicleInformation()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetVehicleInformation);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<GetVehicleInformation>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        IEnumerator PostVehicleLocation()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.PostVehicleLocation);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        IEnumerator GetVehicleLocation()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetVehicleLocation);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
            yield return cd.coroutine;

            var data = JsonConvert.DeserializeObject<GetVehicleLocation>(cd.result.ToString());
            Debug.Log("Data: " + data);
        }

        public IEnumerator GetVehicleThumbnail()
        {
            var uri = APIHelper.GetUri(APIHelper.UriType.GetVehicleThumbnail);
            var headers = new Dictionary<string, string>();
            headers.Add("Application-Id", APIHelper.APP_ID);
            headers.Add("Authorization", APIHelper.ACCESS_TOKEN);
            headers.Add("api-version", APIHelper.API_VERSION);

            var request = UnityWebRequest.Get(uri);
            request.timeout = -1;
            SetHeaders(ref request, headers);
            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
                Debug.Log(request.error);
        
            Texture2D tex = new Texture2D(2, 2);
            tex.LoadImage(request.downloadHandler.data);
            carThumbnail = tex;
        }


        void SetHeaders(ref UnityWebRequest rqst, Dictionary<string, string> headers)
        {
            foreach (var h in headers)
            {
                rqst.SetRequestHeader(h.Key, h.Value);
            }
        }

        IEnumerator PostCommand(string uri, WWWForm form, Dictionary<string, string> headers = null)
        {

            var request =
                UnityWebRequest.Post(
                    uri,
                    form);

            if (headers != null)
            {
                SetHeaders(ref request, headers);
            }

            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
                Debug.Log(request.error);

            yield return request.downloadHandler.text;
        }

        IEnumerator PostCommand(string uri, Dictionary<string, string> fields)
        {
            var request =
                UnityWebRequest.Post(
                    uri,
                    fields);

            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
                Debug.Log(request.error);

            yield return request.downloadHandler.text;
        }

        IEnumerator GetCommand(string uri, Dictionary<string, string> headers)
        {
            var request = UnityWebRequest.Get(uri);
            request.timeout = -1;
            SetHeaders(ref request, headers);
            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
                Debug.Log(request.error);

            yield return request.downloadHandler.text;
        }
    }
}
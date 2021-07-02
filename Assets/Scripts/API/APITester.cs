
using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using API.JsonObjects.Tokens;
using API.JsonObjects.VehicleCommands;

public class APITester : MonoBehaviour
{
    private const string CODE_TOKEN = "eyJraWQiOiI2cjIzQ2FTeTF4cFdUUFBxYVRtX01Vc2RKZGo1RWlDTnRtME4yVTAxNTdFIiwidmVyIjoiMS4wIiwiemlwIjoiRGVmbGF0ZSIsInNlciI6IjEuMCJ9.CnVkvdaLme9lzCtJJ7pGoXT_TU5rytqsHEpTSWlZzs6kv4silCBh2Ap_nOzjPrKGl1PUC18FJ4A1Ihj4f3X9nzAniKJ4qQSLQT4v_QP82Ujzr9mysu3Xu_MiUzW6gm93TI2XbVi5Kcq1eQkezUDS7uAzqb8lkZlsp7ZEqREnrFBA17g8DMCzcVokE3ADQ2MfNZIE2jjK1PSKBz9GS3I8amSJPDpJy03wMweV-HxHgbiREdV4Upzmzk8FBDsQLYcy2LYSY0cxABhnANEBiYUdSE6KbrvXfvpg9u_6ATqVOMjA68p2zFeSiiEL6La1iJo6JoZWh8WdzaYiBl4cB9fNPQ.oK8Enar8g8MDhU6b.hzopd0MOIRRxVeuhLEmluwMpDE38wPyea6DMJjYQ4Oc3ykmZ6Kh-E7vjPM-HJhRZlONOmfYBFFTOKqdr3VlkCRDyf_xRunwtWPhiZhFIFjcbtV3uOuZHDY1VjfnHofZHrXjzQshb3Q8tUakjo7wA-DbUuP1wOk6PNMBeB-uxkwekFkSNs6Rk5ZGJCRtG8MOl_a4r0GP_uQ-VZbOFYE_0gkVPus_oy3cpZFmIRlb-h2rtL0U1c_81vc51tfjt0PoviK3Jh0DNjetOmFDSnsDcLpExm1WVpPkkvIhyfiKWhej4O245i6rvBQnF_2RIYn3LNBaDrn9kls78KcRm72RPxIgDDWRLpbJDn__oMihdBdwjSHngLLRpBJwU2am0LP6yJlc_HpQ2-i020sH-yKKppLrToKp59Mft18LxDqbsg3Pd3bDUQ6oPtKK0XV5Rm-jtiO1cS1TvnyZqmy9WyqL9gJEYv4rzQuLnt2xZ8qzQxPZfhx51nh5TIVNdz7cMsY5UVQO-uX93Fj-qlDrhT9O3IPXkeBIx3g9pmkuOUCmrD3WtbDYly-EpKMH3B1JnUbt4KfeDdVqNGX0oHSjNwXKNO87iCLxVSOVxT1q8TI1ipG3eCat0lKRwF9IlpExnzbFufLdF7zD47vAjQaeukJrNlNKnVvMBjhnsLkuM3mKf8rzs0Jh1DHrejmC3a_fmbaTr3G0_IwQMpcrhDenixeIzoB8c_L8w4l-mVSl7HVyl0ejSo1yoaLy-R3L1O8eTAUi-IDSASpxwMxmrLTBYi1nEVVN6SoBNvHGk5GEgdbLBx67WvSdSA8MKBpPP2tZTByAtARxQfwvGEPnYmSieLw.C-EVOqgo5O_40GpfUEhQ5w";
    private string ACCESS_TOKEN =
        "Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiIsImtpZCI6IlMxUEZhdzdkR2s3bHNFQmEzUjVWMnRLSzVYYnNIWEJsemFXZGhjNUVNdW8ifQ.eyJpc3MiOiJodHRwczovL2RhaDJ2YjJjcHJvZC5iMmNsb2dpbi5jb20vOTE0ZDg4YjEtMzUyMy00YmY2LTliZTQtMWI5NmI0ZjZmOTE5L3YyLjAvIiwiZXhwIjoxNjI1MTg5OTgxLCJuYmYiOjE2MjUxODg3ODEsImF1ZCI6ImMxZTRjMWEwLTI4NzgtNGU2Zi1hMzA4LTgzNmIzNDQ3NGVhOSIsImxvY2FsZSI6ImVuIiwiaWRwIjoiYjJjX0RwSzFPQW44ZFEiLCJtdG1JZCI6Ijc2ODAwYTVkLTE3M2EtNGYzYy05ZDM2LTc5YTE5OGQyMGRiMiIsInVzZXJHdWlkIjoiakZ2M09FY3lvN3JmaGFOVmdrenZHbVEvYjBjU1huZXp1cHRGYTlMS0EvTFhZdnNzVmtqNjkvd3RvazJUekorYSIsInN1YiI6IjNhOTRjNTFhLTMxYzEtNDRiYS05ZTQ3LTljMWQ2NGVhYWU5MiIsIm5vbmNlIjoiMTIzNDU2Iiwic2NwIjoiYWNjZXNzIiwiYXpwIjoiMzA5OTAwNjItOTYxOC00MGUxLWEyN2ItN2M2YmNiMjM2NThhIiwidmVyIjoiMS4wIiwiaWF0IjoxNjI1MTg4NzgxfQ.QCJhInOfQZH4UhruyuRmDfQJqs40YF8YdOkhkQmCJa3Njb8tmAJqJst_XZYIMprEc9uP4f55wmZuxzJ5mwXuFb_6QW-6A7Vjy9u5fziANfO1IvO0a5BLGf720xzX_rXc8KLGvoGFE74W2BsGqY0-Lib5yQsJAVisHB0i7VqqV-HHPe3_vThl7gjJtll-fmA8QxSLUe1M8Ycu6pkwsDgZmMAGXziRBSksfYt4Rs9gYXCYUwGigU7YIdbueEtSlhMqkIaaYla4eQfwcc4elFWiLvOjAUzRXjqNWkzpR-eNpMaZLHreGT7bnYx80aC-RUbg4tFffSqFXwo7cPzqhfLoUg";

    private string REFRESH_TOKEN =
        "eyJraWQiOiI2cjIzQ2FTeTF4cFdUUFBxYVRtX01Vc2RKZGo1RWlDTnRtME4yVTAxNTdFIiwidmVyIjoiMS4wIiwiemlwIjoiRGVmbGF0ZSIsInNlciI6IjEuMCJ9.ktO9KdL9K0mfqZlbvAvsAZqKID0CqwO9chFYP_Exr6pfmc6DZdYDod4tnF2T0RjaqGRm-qc9sZsSSNVgbezyVDXnweIdFuuxiq8avxfSkrCKrJ5si3X65rIo_dh47UYjw8e8yljJWv2pcgSuDMyN_CHs9IbIcc4l3oS2vrVCQDoNDOSLtQ9stB-mkmITYLBPRMFyziybBc3mSO5iYMet4mL7yvcIVgXlzqZNVlf4-LM6oMSe7SjhxH1wA1DOkZm_JCIps6ubo78Ae8KYUmik39U6eM0KPAnHrpQbHZjrl_w_Y3ub2z-XA4mwJtBUI0TURl-a4GQaxadvy60W3wVU0w.1f0c-Wjknygo5ED6.785Jhs-QK9n_mvDbyjBIdYrkmn95zpY2S7BZKc54jUP4uQHtI498rZTY9eph9TEu5QCadV1j4EVudjQcQtVhK5inrQJWDj298Z_bpM65bP5rsDg9aUZwNEm9VweuhhtnLO3CYiAVj8_ELCiZhlSnZ1jAyk1ssaBle87CCuNI4ugdPPYGHbjGyYhrCKBhlQT-DnXXFD1yUB8W8VedHJpp36Cm2Klnv2_07TOmNr-LQ85SCs2k_Jc8Ui_1EpazVWJorUuKPax95F58pxGbtTllqccia9jINZpgenrrXiQsjordeMbgiYXIM5HcmcUUEfeSUd-AfJCmsRuFbBi1IhGlpn_SiaflJQ6vZhFg3wq9FZgac65r6qGtWnLtQiDLBlXUaQR6LZNwmGq1JMfJ53FTKuXbM2Es_B4UoaXumvQcBXI4dgeNjBjYf5vC55A-hxbt9-4YBlYFwq1XXl4iD-dCXMuDr6u7SZr63pK_iCLePHUgo9qjoh3gV3T5zFbOuV1nYPHdjjHAuManwwlu2XqFZFmKdV0Twi_v337lvFpgjVBpqCzmLSZ5bJXJEatCdVQhQDnCbVIPEdH3tzLgllQMxu6XTp8_7cUrbnzGPPj9I3qo2XuQEbPFtDchLCmk45Sl1Iqagaa9z3ahAPHww_O3SNDcTOTQyG-uGbvVVJkHxgR13AARl1bkX23zC3tgafgYbSDuBJrM-k3timcSimwjX-Z1jZtx9PwSEQrcz-Iwn8b99I3Vk8hgidm68VpIaofSdB6Z3sBoZyNvRxUMhIVt7dlw0olqD2RlejO52C5y4m5PBdttFehtbOEi7ixVrlneRodaTST4_Es7NANRJEGQ98MzKVGY.GTZe8iDxnK3viWP9xW5Dew";

    private const string CLIENT_ID = "30990062-9618-40e1-a27b-7c6bcb23658a";
    private const string CLIENT_SECRET = "T_Wk41dx2U9v22R5sQD4Z_E1u-l2B-jXHE";
    private const string API_VERSION = "2020-06-01";
    private const string APP_ID = "afdc085b-377a-4351-b23e-5e1d35fb3700";

    private string unlockVehicleCommandId = "";
    private string lockVehicleCommandId = "";
    private string startEngineCommandId = "";
    private string stopEngineCommandId = "";
    private string vehicleStatusCommandId = "";

    public UnityEngine.UI.RawImage thumbnailImg;
    
    [ContextMenu("Get Vehicle Command Status")]
    void TestGetVehicleCommandStatus() {
        var test = APIHelper.GetUnlockCommandStatus();
        Debug.Log(test);
    }

    [ContextMenu("TestToken")]
    void TestGetToken() {
        StartCoroutine(GetFordToken());
    }

    [ContextMenu("TestRefreshToken")]
    void TestGetRefreshToken()
    {
        StartCoroutine(GetFordRefreshToken());
    }

    [ContextMenu("TestGetVehicleList")]
    void TestGetVehicleList()
    {
        StartCoroutine(GetVehicleList());
    }
    
    
    [ContextMenu("TestUnlockVehicle")]
    void TestUnlockVehicle()
    {
        StartCoroutine(UnlockVehicle());
    }
    
    
    [ContextMenu("TestUnlockCommandStatus")]
    void TestUnlockCommandStatus()
    {
        StartCoroutine(UnlockCommandStatus());
    }
    
    
    [ContextMenu("TestLockVehicle")]
    void TestLockVehicle()
    {
        StartCoroutine(LockVehicle());
    }
    
    [ContextMenu("TestLockCommandStatus")]
    void TestLockCommandStatus()
    {
        StartCoroutine(LockCommandStatus());
    }
    
    
    [ContextMenu("TestStartEngine")]
    void TestStartEngine()
    {
        StartCoroutine(StartEngine());
    }
    
    [ContextMenu("TestStartCommandStatus")]
    void TestStartCommandStatus()
    {
        StartCoroutine(StartCommandStatus());
    }
    
    
    [ContextMenu("TestStopEngine")]
    void TestStopEngine()
    {
        StartCoroutine(StopEngine());
    }
    
    [ContextMenu("TestStopCommandStatus")]
    void TestStopCommandStatus()
    {
        StartCoroutine(StopCommandStatus());
    }
    
    
    [ContextMenu("TestWake")]
    void TestWake()
    {
        StartCoroutine(Wake());
    }
    
    [ContextMenu("TestPostVehicleStatus")]
    void TestPostVehicleStatus()
    {
        StartCoroutine(VehicleStatus());
    }
    
    [ContextMenu("TestGetVehicleStatus")]
    void TestGetVehicleStatus()
    {
        StartCoroutine(GetVehicleStatus());
    }
    
    [ContextMenu("TestGetVehicleInformation")]
    void TestGetVehicleInformation()
    {
        StartCoroutine(GetVehicleInformation());
    }
    
    [ContextMenu("TestPostVehicleLocation")]
    void TestPostVehicleLocation()
    {
        StartCoroutine(PostVehicleLocation());
    }
    
    [ContextMenu("TestGetVehicleLocation")]
    void TestGetVehicleLocation()
    {
        StartCoroutine(GetVehicleLocation());
    }
    
    [ContextMenu("TestGetVehicleThumbnail")]
    void TestGetVehicleThumbnail()
    {
        StartCoroutine(GetVehicleThumbnail());
    }
    
    void Start()
    {
        StartCoroutine(GetFordRefreshToken());
    }



    IEnumerator GetFordToken()
    {
        var uri =
            "https://dah2vb2cprod.b2clogin.com/914d88b1-3523-4bf6-9be4-1b96b4f6f919/oauth2/v2.0/token?p=B2C_1A_signup_signin_common";
        var dict = new Dictionary<string, string>();
        dict.Add("grant_type", "authorization_code");
        dict.Add("client_id", CLIENT_ID);
        dict.Add("client_secret", CLIENT_SECRET);
        dict.Add("code", CODE_TOKEN);
        dict.Add("redirect_uri", "https%3A%2F%2Flocalhost%3A3000");

        CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, dict));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<FordToken>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }

    IEnumerator GetFordRefreshToken()
    {
        var uri =
            "https://dah2vb2cprod.b2clogin.com/914d88b1-3523-4bf6-9be4-1b96b4f6f919/oauth2/v2.0/token?p=B2C_1A_signup_signin_common";
        WWWForm form = new WWWForm();
        form.AddField("grant_type", "refresh_token");
        form.AddField("refresh_token", REFRESH_TOKEN);
        form.AddField("client_id", CLIENT_ID);
        form.AddField("client_secret", CLIENT_SECRET);

        CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, form));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<FordToken>(cd.result.ToString());
        
        Debug.Log("Data: " + data);
        ACCESS_TOKEN = "Bearer " + data.access_token;
    }

    IEnumerator GetVehicleList()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1";

        var headers = new Dictionary<string, string>();

        headers.Add("Accept", "application/json");
        headers.Add("Content-Type", "application/json");
        headers.Add("api-version", API_VERSION);
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        
        CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<VehicleList>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }

    IEnumerator UnlockVehicle()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/unlock";
        var headers = new Dictionary<string, string>();
        headers.Add("Accept", "*/*");
        headers.Add("Content-Type", "application/json");
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        headers.Add("callback-url", "{{callback-url}}");
        
        
        CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null,  headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        unlockVehicleCommandId = data.commandId;
        Debug.Log("Data: " + data);
    }

    IEnumerator UnlockCommandStatus()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/unlock/" + unlockVehicleCommandId;
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        headers.Add("commandid", unlockVehicleCommandId);
        
        CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }

    IEnumerator LockVehicle()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/lock";
        var headers = new Dictionary<string, string>();
        headers.Add("Accept", "application/json");
        headers.Add("Content-Type", "application/json");
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null,  headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        lockVehicleCommandId = data.commandId;
        Debug.Log("Data: " + data);
    }
    
    IEnumerator LockCommandStatus()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/lock/" + lockVehicleCommandId;
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }
    
    IEnumerator StartEngine()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/startEngine";
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null,  headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        startEngineCommandId = data.commandId;
        Debug.Log("Data: " + data);
    }
    
    IEnumerator StartCommandStatus()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/startEngine/" + startEngineCommandId;
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }
    
    IEnumerator StopEngine()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/stopEngine";
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null,  headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        stopEngineCommandId = data.commandId;
        Debug.Log("Data: " + data);
    }
    
    IEnumerator StopCommandStatus()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/stopEngine/" + stopEngineCommandId;
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }
    
    IEnumerator Wake()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/wake";
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null,  headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        stopEngineCommandId = data.commandId;
        Debug.Log("Data: " + data);
    }
    
    IEnumerator VehicleStatus()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/status";
        var headers = new Dictionary<string, string>();
        headers.Add("Accept", "*/*");
        headers.Add("Content-Type", "application/json");
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        headers.Add("callback-url", "{{callback-url}}");
        
        CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null,  headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<UnlockVehicle>(cd.result.ToString());
        vehicleStatusCommandId = data.commandId;
        Debug.Log("Data: " + data);
    }
    
    IEnumerator GetVehicleStatus()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/statusrefresh/" + vehicleStatusCommandId;
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<GetVehicleStatus>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }
    
    IEnumerator GetVehicleInformation()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a";
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<GetVehicleInformation>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }

    IEnumerator PostVehicleLocation()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/location";
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, PostCommand(uri, null,  headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<VehicleCommand>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }

    IEnumerator GetVehicleLocation()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/location";
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        CoroutineWithData cd = new CoroutineWithData(this, GetCommand(uri, headers));
        yield return cd.coroutine;
        
        var data = JsonConvert.DeserializeObject<GetVehicleLocation>(cd.result.ToString());
        Debug.Log("Data: " + data);
    }

    IEnumerator GetVehicleThumbnail()
    {
        var uri = "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/images/thumbnail?make=Ford&model=&year=2019";
        var headers = new Dictionary<string, string>();
        headers.Add("Application-Id", APP_ID);
        headers.Add("Authorization", ACCESS_TOKEN);
        headers.Add("api-version", API_VERSION);
        
        var request = UnityWebRequest.Get(uri);
        request.timeout = -1;
        SetHeaders(ref request, headers);
        yield return request.SendWebRequest();
        
        if(request.result != UnityWebRequest.Result.Success)
            Debug.Log(request.error);

        Texture2D tex = new Texture2D(2,2);
        tex.LoadImage(request.downloadHandler.data);
        thumbnailImg.texture = tex;
        thumbnailImg.SetNativeSize();
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
        
        if(request.result != UnityWebRequest.Result.Success)
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
        
        if(request.result != UnityWebRequest.Result.Success)
            Debug.Log(request.error);
        
        yield return request.downloadHandler.text;
    }
    
    IEnumerator GetCommand(string uri, Dictionary<string, string> headers)
    {
        var request = UnityWebRequest.Get(uri);
        request.timeout = -1;
        SetHeaders(ref request, headers);
        yield return request.SendWebRequest();
        
        if(request.result != UnityWebRequest.Result.Success)
            Debug.Log(request.error);
        
        yield return request.downloadHandler.text;
    }


    


}   

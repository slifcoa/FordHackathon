using System.Net;
using System.IO;
using Newtonsoft.Json;
using UnityEngine.Networking;
using UnityEngine;
using System.Collections.Generic;
using API.JsonObjects.VehicleCommands;

public static class APIHelper 
{
    public static string ACCESS_TOKEN =
        "Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiIsImtpZCI6IlMxUEZhdzdkR2s3bHNFQmEzUjVWMnRLSzVYYnNIWEJsemFXZGhjNUVNdW8ifQ.eyJpc3MiOiJodHRwczovL2RhaDJ2YjJjcHJvZC5iMmNsb2dpbi5jb20vOTE0ZDg4YjEtMzUyMy00YmY2LTliZTQtMWI5NmI0ZjZmOTE5L3YyLjAvIiwiZXhwIjoxNjI1MTg5OTgxLCJuYmYiOjE2MjUxODg3ODEsImF1ZCI6ImMxZTRjMWEwLTI4NzgtNGU2Zi1hMzA4LTgzNmIzNDQ3NGVhOSIsImxvY2FsZSI6ImVuIiwiaWRwIjoiYjJjX0RwSzFPQW44ZFEiLCJtdG1JZCI6Ijc2ODAwYTVkLTE3M2EtNGYzYy05ZDM2LTc5YTE5OGQyMGRiMiIsInVzZXJHdWlkIjoiakZ2M09FY3lvN3JmaGFOVmdrenZHbVEvYjBjU1huZXp1cHRGYTlMS0EvTFhZdnNzVmtqNjkvd3RvazJUekorYSIsInN1YiI6IjNhOTRjNTFhLTMxYzEtNDRiYS05ZTQ3LTljMWQ2NGVhYWU5MiIsIm5vbmNlIjoiMTIzNDU2Iiwic2NwIjoiYWNjZXNzIiwiYXpwIjoiMzA5OTAwNjItOTYxOC00MGUxLWEyN2ItN2M2YmNiMjM2NThhIiwidmVyIjoiMS4wIiwiaWF0IjoxNjI1MTg4NzgxfQ.QCJhInOfQZH4UhruyuRmDfQJqs40YF8YdOkhkQmCJa3Njb8tmAJqJst_XZYIMprEc9uP4f55wmZuxzJ5mwXuFb_6QW-6A7Vjy9u5fziANfO1IvO0a5BLGf720xzX_rXc8KLGvoGFE74W2BsGqY0-Lib5yQsJAVisHB0i7VqqV-HHPe3_vThl7gjJtll-fmA8QxSLUe1M8Ycu6pkwsDgZmMAGXziRBSksfYt4Rs9gYXCYUwGigU7YIdbueEtSlhMqkIaaYla4eQfwcc4elFWiLvOjAUzRXjqNWkzpR-eNpMaZLHreGT7bnYx80aC-RUbg4tFffSqFXwo7cPzqhfLoUg";
    
    public const string CODE_TOKEN = "eyJraWQiOiI2cjIzQ2FTeTF4cFdUUFBxYVRtX01Vc2RKZGo1RWlDTnRtME4yVTAxNTdFIiwidmVyIjoiMS4wIiwiemlwIjoiRGVmbGF0ZSIsInNlciI6IjEuMCJ9.CnVkvdaLme9lzCtJJ7pGoXT_TU5rytqsHEpTSWlZzs6kv4silCBh2Ap_nOzjPrKGl1PUC18FJ4A1Ihj4f3X9nzAniKJ4qQSLQT4v_QP82Ujzr9mysu3Xu_MiUzW6gm93TI2XbVi5Kcq1eQkezUDS7uAzqb8lkZlsp7ZEqREnrFBA17g8DMCzcVokE3ADQ2MfNZIE2jjK1PSKBz9GS3I8amSJPDpJy03wMweV-HxHgbiREdV4Upzmzk8FBDsQLYcy2LYSY0cxABhnANEBiYUdSE6KbrvXfvpg9u_6ATqVOMjA68p2zFeSiiEL6La1iJo6JoZWh8WdzaYiBl4cB9fNPQ.oK8Enar8g8MDhU6b.hzopd0MOIRRxVeuhLEmluwMpDE38wPyea6DMJjYQ4Oc3ykmZ6Kh-E7vjPM-HJhRZlONOmfYBFFTOKqdr3VlkCRDyf_xRunwtWPhiZhFIFjcbtV3uOuZHDY1VjfnHofZHrXjzQshb3Q8tUakjo7wA-DbUuP1wOk6PNMBeB-uxkwekFkSNs6Rk5ZGJCRtG8MOl_a4r0GP_uQ-VZbOFYE_0gkVPus_oy3cpZFmIRlb-h2rtL0U1c_81vc51tfjt0PoviK3Jh0DNjetOmFDSnsDcLpExm1WVpPkkvIhyfiKWhej4O245i6rvBQnF_2RIYn3LNBaDrn9kls78KcRm72RPxIgDDWRLpbJDn__oMihdBdwjSHngLLRpBJwU2am0LP6yJlc_HpQ2-i020sH-yKKppLrToKp59Mft18LxDqbsg3Pd3bDUQ6oPtKK0XV5Rm-jtiO1cS1TvnyZqmy9WyqL9gJEYv4rzQuLnt2xZ8qzQxPZfhx51nh5TIVNdz7cMsY5UVQO-uX93Fj-qlDrhT9O3IPXkeBIx3g9pmkuOUCmrD3WtbDYly-EpKMH3B1JnUbt4KfeDdVqNGX0oHSjNwXKNO87iCLxVSOVxT1q8TI1ipG3eCat0lKRwF9IlpExnzbFufLdF7zD47vAjQaeukJrNlNKnVvMBjhnsLkuM3mKf8rzs0Jh1DHrejmC3a_fmbaTr3G0_IwQMpcrhDenixeIzoB8c_L8w4l-mVSl7HVyl0ejSo1yoaLy-R3L1O8eTAUi-IDSASpxwMxmrLTBYi1nEVVN6SoBNvHGk5GEgdbLBx67WvSdSA8MKBpPP2tZTByAtARxQfwvGEPnYmSieLw.C-EVOqgo5O_40GpfUEhQ5w";
    public static string REFRESH_TOKEN =
            "eyJraWQiOiI2cjIzQ2FTeTF4cFdUUFBxYVRtX01Vc2RKZGo1RWlDTnRtME4yVTAxNTdFIiwidmVyIjoiMS4wIiwiemlwIjoiRGVmbGF0ZSIsInNlciI6IjEuMCJ9.ktO9KdL9K0mfqZlbvAvsAZqKID0CqwO9chFYP_Exr6pfmc6DZdYDod4tnF2T0RjaqGRm-qc9sZsSSNVgbezyVDXnweIdFuuxiq8avxfSkrCKrJ5si3X65rIo_dh47UYjw8e8yljJWv2pcgSuDMyN_CHs9IbIcc4l3oS2vrVCQDoNDOSLtQ9stB-mkmITYLBPRMFyziybBc3mSO5iYMet4mL7yvcIVgXlzqZNVlf4-LM6oMSe7SjhxH1wA1DOkZm_JCIps6ubo78Ae8KYUmik39U6eM0KPAnHrpQbHZjrl_w_Y3ub2z-XA4mwJtBUI0TURl-a4GQaxadvy60W3wVU0w.1f0c-Wjknygo5ED6.785Jhs-QK9n_mvDbyjBIdYrkmn95zpY2S7BZKc54jUP4uQHtI498rZTY9eph9TEu5QCadV1j4EVudjQcQtVhK5inrQJWDj298Z_bpM65bP5rsDg9aUZwNEm9VweuhhtnLO3CYiAVj8_ELCiZhlSnZ1jAyk1ssaBle87CCuNI4ugdPPYGHbjGyYhrCKBhlQT-DnXXFD1yUB8W8VedHJpp36Cm2Klnv2_07TOmNr-LQ85SCs2k_Jc8Ui_1EpazVWJorUuKPax95F58pxGbtTllqccia9jINZpgenrrXiQsjordeMbgiYXIM5HcmcUUEfeSUd-AfJCmsRuFbBi1IhGlpn_SiaflJQ6vZhFg3wq9FZgac65r6qGtWnLtQiDLBlXUaQR6LZNwmGq1JMfJ53FTKuXbM2Es_B4UoaXumvQcBXI4dgeNjBjYf5vC55A-hxbt9-4YBlYFwq1XXl4iD-dCXMuDr6u7SZr63pK_iCLePHUgo9qjoh3gV3T5zFbOuV1nYPHdjjHAuManwwlu2XqFZFmKdV0Twi_v337lvFpgjVBpqCzmLSZ5bJXJEatCdVQhQDnCbVIPEdH3tzLgllQMxu6XTp8_7cUrbnzGPPj9I3qo2XuQEbPFtDchLCmk45Sl1Iqagaa9z3ahAPHww_O3SNDcTOTQyG-uGbvVVJkHxgR13AARl1bkX23zC3tgafgYbSDuBJrM-k3timcSimwjX-Z1jZtx9PwSEQrcz-Iwn8b99I3Vk8hgidm68VpIaofSdB6Z3sBoZyNvRxUMhIVt7dlw0olqD2RlejO52C5y4m5PBdttFehtbOEi7ixVrlneRodaTST4_Es7NANRJEGQ98MzKVGY.GTZe8iDxnK3viWP9xW5Dew";
    
    public static string CLIENT_ID = "30990062-9618-40e1-a27b-7c6bcb23658a";
    public static string CLIENT_SECRET = "T_Wk41dx2U9v22R5sQD4Z_E1u-l2B-jXHE";
    public static string API_VERSION = "2020-06-01";
    public static string APP_ID = "afdc085b-377a-4351-b23e-5e1d35fb3700";
    public const string CONT_TYPE = "application/json";
    
    public enum CommandType
    {
        NONE,
        UnlockVehicle,
        LockVehicle,
        StartEngine,
        StopEngine,
        VehicleStatus,
    }

    public enum UriType
    {
        GetAccessToken,
        GetRefreshToken,
        GetVehicleList,
        PostUnlockVehicle,
        GetUnlockVehicle,
        PostLockVehicle,
        GetLockVehicle,
        PostStartEngine,
        GetStartEngine,
        PostStopEngine,
        GetStopEngine,
        PostWake,
        PostVehicleStatus,
        GetVehicleStatus,
        GetVehicleInformation,
        PostVehicleLocation,
        GetVehicleLocation,
        GetVehicleThumbnail
    }

    public static Dictionary<CommandType, string> commandIds = new Dictionary<CommandType, string>
    {
        {CommandType.UnlockVehicle, ""},
        {CommandType.LockVehicle, ""},
        {CommandType.StartEngine, ""},
        {CommandType.StopEngine, ""},
        {CommandType.VehicleStatus, ""},
    };
    private static Dictionary<UriType, string> uris = new Dictionary<UriType, string>
    {
        {UriType.GetAccessToken, "https://dah2vb2cprod.b2clogin.com/914d88b1-3523-4bf6-9be4-1b96b4f6f919/oauth2/v2.0/token?p=B2C_1A_signup_signin_common"},
        {UriType.GetRefreshToken, "https://dah2vb2cprod.b2clogin.com/914d88b1-3523-4bf6-9be4-1b96b4f6f919/oauth2/v2.0/token?p=B2C_1A_signup_signin_common"},
        {UriType.GetVehicleList, "https://api.mps.ford.com/api/fordconnect/vehicles/v1"},
        {UriType.PostUnlockVehicle, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/unlock"},
        {UriType.GetUnlockVehicle, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/unlock/"},
        {UriType.PostLockVehicle, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/lock"},
        {UriType.GetLockVehicle, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/lock/"},
        {UriType.PostStartEngine, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/startEngine"},
        {UriType.GetStartEngine, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/startEngine/"},
        {UriType.PostStopEngine, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/stopEngine"},
        {UriType.GetStopEngine, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/stopEngine/"},
        {UriType.PostWake, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/wake"},
        {UriType.PostVehicleStatus, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/status"},
        {UriType.GetVehicleStatus, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/statusrefresh/"},
        {UriType.GetVehicleInformation, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a"},
        {UriType.PostVehicleLocation, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/location"},
        {UriType.GetVehicleLocation, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/location"},
        {UriType.GetVehicleThumbnail, "https://api.mps.ford.com/api/fordconnect/vehicles/v1/8a7f9fa878849d8a0179579d2f26043a/images/thumbnail?make=Ford&model=&year=2019"},
    };

    public static string GetUri(UriType uri_type, CommandType com_type = CommandType.NONE)
    {
        if (com_type == CommandType.NONE)
            return uris[uri_type];
        else
            return uris[uri_type] + commandIds[com_type];
    }

}

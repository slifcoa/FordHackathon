namespace API.JsonObjects.Tokens
{
    [System.Serializable]
    public class FordToken
    {
        public string access_token;
        public string id_token;
        public string token_type;
        public string not_before;
        public string expires_in;
        public string expires_on;
        public string resource;
        public string id_token_expires_in;
        public string profile_info;
        public string scope;
        public string refresh_token;
        public string refresh_token_expires_in;

        public override string ToString()
        {
            return string.Format("Access Token: {0} \n Id Token: {1} \n Token Type: {2} \n NotBefore: {3} \n ExpiresIn: {4} \n ExpiresOn: {5} \n Resource: {6} \n IdTokenExpiresIn: {7} \n ProfileInfo: {8} \n Scope: {9} \n RefreshToken: {10} \n RefreshTokenExpiresIn: {11}",
                access_token, id_token, token_type, not_before, expires_in, expires_on, resource, id_token_expires_in, profile_info, scope, refresh_token, refresh_token_expires_in);
        }
    }    
}


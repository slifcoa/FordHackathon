using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using UnityEngine;

public class DatabaseManager : MonoBehaviour
{
    [Header("Register User Information")] 
    public string userToRegister = "";

    public string emailToRegister = "";
    public string passwordToRegister = "";
    
    
    [Header("Login User Information")]
    public string emailToLogin = "ememy@yahoo.com";

    public string passwordToLogin = "mashedpotatoes";
    
    [Header("User Information")]
    public string vin = "1234567895";

    public string handle = "@jimmyjoe";
    public string username = "buddha";

    [Header("Ride Information")] public string departing = "Mcdonalds";
    public string destination = "Wendys";
    public string timestamp = "123456";

    [Header("Friend Id")] 
    public string friendIdToAdd = "1234556";

    [Header("Carpool Friend Id")] public string rideIdToAdd = "";
    public string carpoolFriendIdToAdd = "1234556";

    public FirebaseAuth auth;
    public DatabaseReference DBreference;
    public FirebaseUser user;

    private List<User> myFriends;
    private List<Ride> myRides;
    private List<Carpools> myCarpools;

    private void Start()
    {
        auth = FirebaseAuth.DefaultInstance;
        DBreference = FirebaseDatabase.DefaultInstance.RootReference;
        StartCoroutine(LoginUser(emailToLogin, passwordToLogin));
        myFriends = new List<User>();
        myRides = new List<Ride>();
        myCarpools = new List<Carpools>();
    }

    [ContextMenu("RegisterUser")]
    void AddUserEntry()
    {
        StartCoroutine(RegisterUser(emailToRegister, passwordToRegister, userToRegister));
    }

    [ContextMenu("LoginUser")]
    void LoginUser()
    {
        StartCoroutine(LoginUser(emailToLogin, passwordToLogin));
    }

    [ContextMenu("AddUserInfo")]
    void AddUserVin()
    {
        StartCoroutine(UpdateUserInfo(vin, username, handle));
    }

    [ContextMenu("AddUserRides")]
    void AddUserRide()
    {
        StartCoroutine(AddUserRide(departing, destination, timestamp));
    }

    [ContextMenu("AddFriendId")]
    void AddFriend()
    {
        StartCoroutine(AddFriend(friendIdToAdd, timestamp));
    }

    [ContextMenu("GetMyRides")]
    void MyRides()
    {
        StartCoroutine(GetMyRides());
    }

    [ContextMenu("GetMyFriends")]
    void MyFriends()
    {
        StartCoroutine(GetMyFriends());
    }

    [ContextMenu("AddCarpool")]
    void AddCarpool()
    {
        StartCoroutine(AddCarpoolEntry());
    }

    [ContextMenu("GetMyCarpools")]
    void MyCarpools()
    {
        StartCoroutine(GetMyCarpools());
    }

    IEnumerator AddCarpoolEntry()
    {
        Carpools carpools = new Carpools(rideIdToAdd, user.UserId);
        var json = JsonUtility.ToJson(carpools);
        var key = DBreference.Child("carpools").Push().Key;

        var dbTask = DBreference.Child("carpools").Child(key).SetRawJsonValueAsync(json);

        yield return new WaitUntil(() => dbTask.IsCompleted);

        if (dbTask.Exception != null)
        {
            Debug.LogWarning($"Failed to register task with {dbTask.Exception}");
        }
        else
        {
            Debug.Log("Carpool Added Successfully");
        }
        
    }

    public IEnumerator GetMyCarpools()
    {
        var dbTask = DBreference.Child("carpools").OrderByChild("passengerId").EqualTo(user.UserId).GetValueAsync();

        yield return new WaitUntil(() => dbTask.IsCompleted);

        if (dbTask.Exception != null)
        {
            Debug.LogWarning(message: $"Failed to register task with {dbTask.Exception}");
        }
        
        myCarpools.Clear();
        DataSnapshot snapshot = dbTask.Result;

        foreach (DataSnapshot childSnapshot in snapshot.Children.Reverse<DataSnapshot>())
        {
            var passenger = childSnapshot.Child("passengerId").Value.ToString();
            var ride = childSnapshot.Child("rideId").Value.ToString();

            Carpools cp = new Carpools(ride, passenger);
            myCarpools.Add(cp);
        }

        var rideTask = DBreference.Child("rides").GetValueAsync();
        yield return new WaitUntil(() => rideTask.IsCompleted);

        DataSnapshot snap = rideTask.Result;
        List<Ride> carpoolRides = new List<Ride>();
        foreach (DataSnapshot childSnapshot in snap.Children)
        {
            var rideId = childSnapshot.Key;

            if (myCarpools.Exists(x => x.rideId == rideId))
            {
                var depart = childSnapshot.Child("departure").Value.ToString();
                var dest = childSnapshot.Child("destination").Value.ToString();
                var timestamp = childSnapshot.Child("timestamp").Value.ToString();
                var userId = childSnapshot.Child("userId").Value.ToString();
                Ride r = new Ride(depart, dest, timestamp, userId);
                carpoolRides.Add(r);    
            }

            
        }
        
        Debug.Log("My Carpools Count: " + carpoolRides.Count);
        yield return carpoolRides;

    }
    public IEnumerator GetMyRides()
    {
        var dbTask = DBreference.Child("rides").OrderByChild("userId").EqualTo(user.UserId).GetValueAsync();

        yield return new WaitUntil(() => dbTask.IsCompleted);

        if (dbTask.Exception != null)
        {
            Debug.LogWarning(message: $"Failed to register task with {dbTask.Exception}");
        }

        myRides.Clear();
        DataSnapshot snapshot = dbTask.Result;

        foreach (DataSnapshot childSnapshot in snapshot.Children.Reverse<DataSnapshot>())
        {
                var userId = childSnapshot.Child("userId").Value.ToString();
                var departure = childSnapshot.Child("departure").Value.ToString();
                var destination = childSnapshot.Child("destination").Value.ToString();
                var timestamp = childSnapshot.Child("timestamp").Value.ToString();
                Ride ride = new Ride(departure, destination, timestamp, userId);
                myRides.Add(ride);
        }
        
        Debug.Log("My Rides Count: " + myRides.Count);
        yield return myRides;
    }

    [ContextMenu("TestingDumbWay")]
    public void TestDumbWay()
    {
        
        DBreference.Child("users").OrderByChild ("vin").EqualTo("123")
            .ValueChanged += (object sender2, ValueChangedEventArgs e2) => {
            if (e2.DatabaseError != null) {
                Debug.LogError (e2.DatabaseError.Message);
            }


            if (e2.Snapshot != null && e2.Snapshot.ChildrenCount > 0) {

                foreach (var childSnapshot in e2.Snapshot.Children) {
                    var name = childSnapshot.Key.ToString (); 

                    //text.text = name.ToString();
                    Debug.Log(name.ToString());
                    //text.text = childSnapshot.ToString();

                }

            }

        };
    }

    public IEnumerator GetMyFriends()
    {
        var dbtask = DBreference.Child("friends").GetValueAsync();
        
        var friendships = new List<Friends>();
        yield return new WaitUntil(() => dbtask.IsCompleted);
        
        if (dbtask.Exception != null)
        {
            Debug.LogWarning(message: $"Failed to register task with {dbtask.Exception}");
        }
        
        myFriends.Clear();
        DataSnapshot snapshot = dbtask.Result;

        foreach (DataSnapshot childSnapshot in snapshot.Children.Reverse<DataSnapshot>())
        {
            var userOne = childSnapshot.Child("userOne").Value.ToString();
            var userTwo = childSnapshot.Child("userTwo").Value.ToString();
            var timestamp = childSnapshot.Child("timestamp").Value.ToString();

            if (userOne == user.UserId || userTwo == user.UserId)
            {
                Friends friend = new Friends(userOne, userTwo, timestamp);
                friendships.Add(friend);
            }
        }

        List<string> friendIds = new List<string>();
        foreach (var f in friendships)
        {
            var friendId = f.userOne == user.UserId ? f.userTwo : f.userOne;
            friendIds.Add(friendId);
        }

        var dbtasky = DBreference.Child("users").GetValueAsync();
        yield return new WaitUntil(() => dbtasky.IsCompleted);

        var userSnap = dbtasky.Result;

        foreach (DataSnapshot childSnapshot in userSnap.Children)
        {
            if (friendIds.Contains(childSnapshot.Key))
            {
                var userKey = childSnapshot.Key;
                var vin = childSnapshot.Child("vin").Value.ToString();
                var username = childSnapshot.Child("username").Value.ToString();
                var handle = childSnapshot.Child("handle").Value.ToString();
                User u = new User(userKey, vin, username,handle);
                myFriends.Add(u);       
            }
        }
        
        Debug.Log("My Friends Count: " + myFriends.Count);

        yield return myFriends;

    }

    IEnumerator AddFriend(string _friend_id, string _timestamp)
    {
        Friends friends = new Friends(this.user.UserId, _friend_id, _timestamp);
        var key = DBreference.Child("friends").Push().Key;

        var json = JsonUtility.ToJson(friends);

        var dbTask = DBreference.Child("friends").Child(key).SetRawJsonValueAsync(json);

        yield return new WaitUntil(() => dbTask.IsCompleted);

        if (dbTask.Exception != null)
        {
            Debug.LogWarning($"Failed to register task with {dbTask.Exception}");
        }
        else
        {
            Debug.Log("Friend Added Successfully");
        }
    }

    IEnumerator AddUserRide(string _startingLoc, string _endingLoc, string _timestamp)
    {
        Ride ride = new Ride(_startingLoc, _endingLoc, timestamp, this.user.UserId);
        
        string json = JsonUtility.ToJson(ride);
        var key = DBreference.Child("rides").Push().Key;
        Debug.Log("MY new key: " + key);
        var dbtask = DBreference.Child("rides").Child(key).SetRawJsonValueAsync(json);

        yield return new WaitUntil(() => dbtask.IsCompleted);

        if (dbtask.Exception != null)
        {
            Debug.LogWarning($"Failed to register task with {dbtask.Exception}");
        }
        else
        {
            Debug.Log("User ride added successfully");
        }

    }
    
    IEnumerator UpdateUserInfo(string _vin, string _username, string _handle)
    {
        User u = new User(this.user.UserId, _username, _handle, _vin);

        var jsonData = JsonUtility.ToJson(u);
        var dbtask = DBreference.Child("users").Child(user.UserId).SetRawJsonValueAsync(jsonData);
        yield return new WaitUntil(() => dbtask.IsCompleted);

        if (dbtask.Exception != null)
        {
            Debug.LogWarning($"Failed to add vin with {dbtask.Exception}");
        }
        else
        {
            Debug.Log("Vin added successfully");
        }
    }

    IEnumerator LoginUser(string _email, string _password)
    {
        var loginTask = auth.SignInWithEmailAndPasswordAsync(_email, _password);
        yield return new WaitUntil(() => loginTask.IsCompleted);

        if (loginTask.Exception != null)
        {
            Debug.LogWarning($"Failed to register task with {loginTask.Exception}");
            FirebaseException firebaseEx = loginTask.Exception.GetBaseException() as FirebaseException;
            AuthError errorCode = (AuthError) firebaseEx.ErrorCode;

            string message = "Login Failed!";
            switch (errorCode)
            {
                case AuthError.MissingEmail:
                    message = "Missing Email";
                    break;
                case AuthError.MissingPassword:
                    message = "Missing Password";
                    break;
                case AuthError.WrongPassword:
                    message = "Wrong Password";
                    break;
                case AuthError.InvalidEmail:
                    message = "Invalid Email";
                    break;
                case AuthError.UserNotFound:
                    message = "Account does not exist";
                    break;
            }
        }
        else
        {
            user = loginTask.Result;
            Debug.LogFormat("User signed in successfully: {0} ({1})", user.DisplayName, user.Email);
            Debug.Log("My User Key: " + user.UserId);
            StartCoroutine(LoadUserData());
        }

    }

    IEnumerator RegisterUser(string _email, string _password, string _username)
    {
        var registerTask = auth.CreateUserWithEmailAndPasswordAsync(_email, _password);
        yield return new WaitUntil(predicate: () => registerTask.IsCompleted);

        if (registerTask.Exception != null)
        {
            Debug.LogWarning($"Failed to register task with {registerTask.Exception}");
            FirebaseException firebaseEx = registerTask.Exception.GetBaseException() as FirebaseException;
            AuthError errorCode = (AuthError) firebaseEx.ErrorCode;

            string message = "Register Failed!";
            switch (errorCode)
            {
                case AuthError.MissingEmail:
                    message = "Missing Email";
                    break;
                case AuthError.MissingPassword:
                    message = "Missing Password";
                    break;
                case AuthError.WeakPassword:
                    message = "Weak Password";
                    break;
                case AuthError.EmailAlreadyInUse:
                    message = "Email Already In Use";
                    break;
            }
        }
        else
        {
            Debug.Log("Register Was a Success");
            user = registerTask.Result;

            if (user != null)
            {
                UserProfile profile = new UserProfile {DisplayName = _username};
                var profilesTask = user.UpdateUserProfileAsync(profile);

                yield return new WaitUntil(() => profilesTask.IsCompleted);

                if (profilesTask.Exception != null)
                {
                    Debug.Log("Username Set Failed!");
                }
                else
                {
                    Debug.Log("Username set worked");
                }
            }
        }
    }

    IEnumerator LoadUserData()
    {
        var dbtask = DBreference.Child("users").Child(user.UserId).GetValueAsync();
        yield return new WaitUntil(() => dbtask.IsCompleted);

        if (dbtask.Exception != null)
        {
            Debug.LogWarning($"Failed tor register task with {dbtask.Exception}");
        }
        else if (dbtask.Result.Value == null)
        {
            Debug.Log("User Values are null");
        }
        else
        {
            DataSnapshot snapshot = dbtask.Result;
        }
    }

    [System.Serializable]
    public class User
    {
        private string userKey;
        public string vin;
        public string username;
        public string handle;

        public User(string _user, string _vin, string _username, string _handle)
        {
            userKey = _user;
            vin = _vin;
            username = _username;
            handle = _handle;
        }
    }

    [System.Serializable]
    public class Carpools
    {
        public string rideId;
        public string passengerId;

        public Carpools(string _ride, string _passenger)
        {
            rideId = _ride;
            passengerId = _passenger;
        }
    }

    [System.Serializable]
    public class Ride
    {
        public string departure;
        public string destination;
        public string timestamp;
        public string userId;

        public Ride(string _departure, string _destination, string _timestamp, string _user)
        {
            departure = _departure;
            destination = _destination;
            timestamp = _timestamp;
            userId = _user;
        }
    }

    [System.Serializable]
    public class Friends
    {
        public string userOne;
        public string userTwo;
        public string timestamp;
        
        public Friends(string _user_one, string _user_two, string _timestamp)
        {
            userOne = _user_one;
            userTwo = _user_two;
            timestamp = _timestamp;
        }
    }

}

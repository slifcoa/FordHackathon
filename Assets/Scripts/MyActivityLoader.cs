using System;
using System.Collections;
using System.Collections.Generic;
using Firebase.Auth;
using UnityEngine;

public class MyActivityLoader : MonoBehaviour
{
    public DatabaseManager databaseManager;

    public RideActivityUI rideActivityUI;

    public CarpoolActivityUI carpoolActivityUI;

    private List<DatabaseManager.Ride> myRides;
    private List<DatabaseManager.Ride> myCarpools;

    private SortedList<long, DatabaseManager.Ride> sortedActivity;

    public Sprite mySprite;
    public Sprite otherSprite;
    
    // Start is called before the first frame update
    void Start()
    {
        myRides = new List<DatabaseManager.Ride>();
        myCarpools = new List<DatabaseManager.Ride>();
        sortedActivity = new SortedList<long, DatabaseManager.Ride>();
        StartCoroutine(LoadMyActivity());
    }

    IEnumerator LoadMyActivity()
    {
        CoroutineWithData cd = new CoroutineWithData(this, databaseManager.GetMyRides());
        yield return cd.coroutine;
        var rides = (List<DatabaseManager.Ride>) cd.result;

        CoroutineWithData c = new CoroutineWithData(this, databaseManager.GetMyCarpools());
        yield return c.coroutine;
        var carpools = (List<DatabaseManager.Ride>) c.result;

        foreach (var ride in rides)
        {
            rideActivityUI.Username = "Larry Walker"; // databaseManager.user.DisplayName;
            rideActivityUI.RideDesc = String.Format("Drove from {0} to {1}", ride.departure, ride.destination);
            rideActivityUI.Avatar = mySprite;

            var rideGo = Instantiate(rideActivityUI.gameObject, rideActivityUI.transform.parent);
            rideGo.SetActive(true);
        }

        foreach (var carpool in carpools)
        {
            
            //carpoolActivityUI.u   
        }
    }
}

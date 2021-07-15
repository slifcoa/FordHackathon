using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FriendLoader : MonoBehaviour
{
    private DatabaseManager databaseManager;

    public FriendUI friendUITmp;
    public Sprite[] spriteLoader;

    private void Awake()
    {
        databaseManager = GameObject.Find("Database").GetComponent<DatabaseManager>();
    }

    private void Start()
    {
        StartCoroutine(LoadFriendsList());
    }

    IEnumerator LoadFriendsList()
    {
        CoroutineWithData cd = new CoroutineWithData(this, databaseManager.GetMyFriends());
        yield return cd.coroutine;
        var friends = (List<DatabaseManager.User>)cd.result;
        bool topFriend = true;
        int indexer = 0;
        foreach (var friend in friends)
        {
            friendUITmp.Username = friend.username;
            friendUITmp.Handle = friend.handle;
            friendUITmp.Avatar = spriteLoader[indexer % spriteLoader.Length];
            var friendGO = Instantiate(friendUITmp.gameObject, friendUITmp.transform.parent);
            friendGO.SetActive(true);

            if (topFriend)
            {
                friendGO.transform.SetSiblingIndex(1);
                topFriend = false;
            }
            
            indexer++;
        }
    }
}

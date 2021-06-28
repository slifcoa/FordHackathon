[System.Serializable]
public class UnlockCommandStatus
{
    public string commandStatus;
    public string commandId;

    public override string ToString()
    {
        return "Command Status: " + commandStatus + " Command Id: " + commandId;
    }
}

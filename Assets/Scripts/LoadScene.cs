using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScene : MonoBehaviour
{
    public void LoadGame()
    {
        SceneManager.LoadScene("midterm", LoadSceneMode.Single);
    }
    public static void LoadLose()
    {
        SceneManager.LoadScene("Lose", LoadSceneMode.Single);
    }
    public static void LoadWin()
    {
        SceneManager.LoadScene("Win", LoadSceneMode.Single);
    }
}

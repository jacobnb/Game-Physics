using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScript : MonoBehaviour
{
    public GameObject ship, goal, arrow;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var newPosit = ship.transform.position;
        newPosit.z = -10f;
        transform.position = newPosit;
        transform.rotation = ship.transform.rotation;
        // set rotation
        var goalPos = new Vector2(goal.transform.position.x, goal.transform.position.y);
        var shipPos = new Vector2(ship.transform.position.x, ship.transform.position.y);
        var diff = goalPos - shipPos;
        float rotation = Mathf.Atan2(diff.y, diff.x);
        arrow.transform.eulerAngles = new Vector3(arrow.transform.eulerAngles.x, arrow.transform.eulerAngles.y, rotation*180/Mathf.PI-90f);
       // transform.LookAt(goal.transform);
    }
}

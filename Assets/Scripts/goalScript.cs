using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class goalScript : MonoBehaviour
{
    public CircleCollisionHull2D playerCollider;
    CircleCollisionHull2D collider;
    public float radius = .5f;
    // Start is called before the first frame update
    void Start()
    {
        collider = gameObject.AddComponent<CircleCollisionHull2D>();
        collider.radius = radius;
        collider.FakeStart();
    }

    // Update is called once per frame
    void Update()
    {
        if(collider.TestCollisionVsCircle(playerCollider)){
            LoadScene.LoadWin();
        }
    }
}

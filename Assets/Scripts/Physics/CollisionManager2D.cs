using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionManager2D : MonoBehaviour
{
    // hold an array of all collision hulls.
    // test all collisions

    private static CollisionManager2D instance;
    public static CollisionManager2D getInstance()
    {
        return instance;
    }

    private List<CollisionHull2D> collisionHulls;

    private void Awake()
    {
        if(instance != null && instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            instance = this;
        }
    }
    public void addCollisionHull(CollisionHull2D hull)
    {
        // don't need ref because classes are already references... hopefully
        collisionHulls.Add(hull);
    }

}

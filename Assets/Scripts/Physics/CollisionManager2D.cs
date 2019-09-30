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

    public List<CollisionHull2D> collisionHulls;

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
    private void Update()
    {
        // test each collision
        for (int outer = 0; outer < collisionHulls.Count; outer++)
        {
            for (int inner = outer + 1; inner < collisionHulls.Count; inner++)
            {
                CollisionHull2D.TestCollision(collisionHulls[outer], collisionHulls[inner]);
            }
        }
    }
    public void addCollisionHull(CollisionHull2D hull)
    {
        Debug.Log(hull);
        // don't need ref because classes are already references... hopefully
        //collisionHulls.Add(hull);
    }

}

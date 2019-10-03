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

    public CollisionHull2D[] collisionHulls;

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
    private void Start()
    {
        collisionHulls = GameObject.FindObjectsOfType<CollisionHull2D>();
    }
    private void Update()
    {
        // TODO: finish collision
        CollisionHull2D.Collision c;
        c.contactCount = 4;
        c.contacts = new CollisionHull2D.Collision.Contact[c.contactCount];
        c.closingVelocity = new Vector2(1, 1);
        c.status = false;
        c.a =null;
        c.b = null;
        // test each collision
        for (int outer = 0; outer < collisionHulls.Length; outer++)
        {
            collisionHulls[outer].setCollisionStatus(false);
            for (int inner = 0; inner < collisionHulls.Length; inner++)
            { // test each hull vs all others so all store colision data.
                if(inner == outer)
                {
                    inner++;
                    if (inner >= collisionHulls.Length)
                    {
                        break;
                    }
                }
                CollisionHull2D.TestCollision(collisionHulls[outer], collisionHulls[inner], ref c);
            }
        }
    }
}

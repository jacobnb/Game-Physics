using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionManager2D : MonoBehaviour
{
    // hold an array of all collision hulls.
    // test all collisions

    private static CollisionManager2D instance;
    private Queue<CollisionHull2D.Collision> collisionQ = new Queue<CollisionHull2D.Collision>();
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
                var c = CollisionHull2D.getNewCollisionStruct();
                CollisionHull2D.TestCollision(collisionHulls[outer], collisionHulls[inner], ref c);
                if (c.status)
                {
                    collisionQ.Enqueue(c);
                }
            }
        }
        
        // resolve collisions
        //foreach (var c in collisionQ)
        //{
        //    // TODO: Multiple contact points
        //    c.a.particle2D.setVelocity(-c.closingVelocity * c.contacts[0].restitution);
        while(collisionQ.Count > 0)
        {
            var c = collisionQ.Dequeue();
            // do response.
            // relativeVel = a.velocity
            // relativeVel -= b.velocity;
            // seperatingVel = relativeVel*normal
            // if sepVel > 0
            // newSepVel = -seperatingVel * restitution
            // deltaVel = newSepVel - seperatingVel
            // totalInverseMass = a.mass+b.mass
            // impulse = deltaVelocity / totalInverseMass;
            // ImpulsePerIMass = normal * impulse;
            // a.velocity = a.velocity+impulsePerIMass*a.inversMass
            c.a.getParticle2D().CollisionImpulse(c);
        }
    }
}

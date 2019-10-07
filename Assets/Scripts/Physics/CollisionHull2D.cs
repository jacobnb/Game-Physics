using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHull2D : MonoBehaviour
{
    public struct Collision
    {
        public struct Contact
        {
            Vector2 point;
            Vector2 normal;
            float restitution;
        };
        public CollisionHull2D a, b; // was circle hull in unreal?
        public bool status; // Did they collide?
        public Vector2 closingVelocity;
        public Contact[] contacts; // up to 4
        public int contactCount;
    }
    public Vector2 position; // this should be set from particle 2D.
    private Particle2D particle2D;
    protected LineRenderer lr;
    [SerializeField]
    bool collisionStatus = false;
    virtual protected void Start()
    {
        particle2D = GetComponent<Particle2D>();
        lr = GetComponent<LineRenderer>();
    }
    public void updatePosition()
    {
        position = particle2D.getPosition();
    }
    public enum CollisionHullType2D
    {
        hull_circle,
        hull_aabb,
        hull_obb
    };
    // Assumes only one collision at a time
    protected void setLineColor(bool isColiding)
    {
        var mat = lr.material;
        if (isColiding)
        {
            mat.color = Color.red;
        }
        else
        {
            mat.color = Color.green;
        }
    }
    virtual protected void initLineRenderer() {
        setLineColor(false);
        lr.startWidth = .1f;
    }
    public void setCollisionStatus(bool status)
    {
        collisionStatus = status;
    }
    public static bool TestCollision(CollisionHull2D a, CollisionHull2D b, ref Collision c)
    {
        if(a.type == CollisionHullType2D.hull_circle)
        {
            if(b.type == CollisionHullType2D.hull_circle)
            {
                a.collisionStatus = a.collisionStatus || (a as CircleCollisionHull2D).TestCollisionVsCircle(b as CircleCollisionHull2D, ref c);
            }
            else if (b.type == CollisionHullType2D.hull_aabb)
            {
                a.collisionStatus = a.collisionStatus || (a as CircleCollisionHull2D).TestCollisionVsAABB(b as AABBCollisionHull2D, ref c);
            }
            else if(b.type == CollisionHullType2D.hull_obb)
            {
                a.collisionStatus = a.collisionStatus || (a as CircleCollisionHull2D).TestCollisionVsOBB(b as OBBCollisionHull2D, ref  c);
            }
        }
        else if (a.type == CollisionHullType2D.hull_aabb)
        {
            if (b.type == CollisionHullType2D.hull_circle)
            {
                a.collisionStatus = a.collisionStatus || (a as AABBCollisionHull2D).TestCollisionVsCircle(b as CircleCollisionHull2D, ref c);
            }
            else if (b.type == CollisionHullType2D.hull_aabb)
            {
                a.collisionStatus = a.collisionStatus || (a as AABBCollisionHull2D).TestCollisionVsAABB(b as AABBCollisionHull2D, ref c);
            }
            else if (b.type == CollisionHullType2D.hull_obb)
            {
                a.collisionStatus = a.collisionStatus || (a as AABBCollisionHull2D).TestCollisionVsOBB(b as OBBCollisionHull2D, ref c);
            }
        }
        else if (a.type == CollisionHullType2D.hull_obb)
        {
            if (b.type == CollisionHullType2D.hull_circle)
            {
                a.collisionStatus = a.collisionStatus || (a as OBBCollisionHull2D).TestCollisionVsCircle(b as CircleCollisionHull2D, ref c);
            }
            else if (b.type == CollisionHullType2D.hull_aabb)
            {
                a.collisionStatus = a.collisionStatus || (a as OBBCollisionHull2D).TestCollisionVsAABB(b as AABBCollisionHull2D, ref c);
            }
            else if (b.type == CollisionHullType2D.hull_obb)
            {
                a.collisionStatus = a.collisionStatus || (a as OBBCollisionHull2D).TestCollisionVsOBB(b as OBBCollisionHull2D, ref c);
            }
        }

        a.setLineColor(a.collisionStatus);
        return a.collisionStatus;
    }

    public virtual bool TestCollisionVsCircle(CircleCollisionHull2D other, ref Collision c)
    {
        return false;
    }
    public virtual bool TestCollisionVsAABB(AABBCollisionHull2D other, ref Collision c)
    {
        return false;
    }
    public virtual bool TestCollisionVsOBB(OBBCollisionHull2D other, ref Collision c)
    {
        return false;
    }

    protected void fake_constructor(CollisionHullType2D type_set, CollisionHull2D self)
    {
        type = type_set;
    }
	//CollisionHull2D(CollisionHullType2D type_set)
 //   {
 //       type = type_set;
 //   }
 //  protected CollisionHull2D() { }

    protected CollisionHullType2D type;
}

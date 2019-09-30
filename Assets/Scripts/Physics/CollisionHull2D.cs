using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHull2D : MonoBehaviour
{
    public enum CollisionHullType2D
    {
        hull_circle,
        hull_aabb,
        hull_obb
    };
    public static bool TestCollision(CollisionHull2D a, CollisionHull2D b)
    {
        bool collisionStatus = false;
        if(a.type == CollisionHullType2D.hull_circle)
        {
            if(b.type == CollisionHullType2D.hull_circle)
            {
                (a as CircleCollisionHull2D).TestCollisionVsCircle(b as CircleCollisionHull2D);
            }
        }
        return collisionStatus;
    }

    public virtual bool TestCollisionVsCircle(CircleCollisionHull2D other)
    {
        return false;
    }
    public virtual bool TestCollisionVsAABB(AABBCollisionHull2D other)
    {
        return false;
    }
    public virtual bool TestCollisionVsOBB(OBBCollisionHull2D other)
    {
        return false;
    }

    protected void fake_constructor(CollisionHullType2D type_set, CollisionHull2D self)
    {
        CollisionManager2D.getInstance().addCollisionHull(self);
        type = type_set;
    }
	//CollisionHull2D(CollisionHullType2D type_set)
 //   {
 //       type = type_set;
 //   }
 //  protected CollisionHull2D() { }

    protected CollisionHullType2D type;
}

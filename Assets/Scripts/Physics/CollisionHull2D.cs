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
        //get type, pick collision test

        return false;
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

    protected void fake_constructor(CollisionHullType2D type_set)
    {
        CollisionManager2D.getInstance().addCollisionHull(this);
        type = type_set;
    }
	//CollisionHull2D(CollisionHullType2D type_set)
 //   {
 //       type = type_set;
 //   }
 //  protected CollisionHull2D() { }

    protected CollisionHullType2D type;
}

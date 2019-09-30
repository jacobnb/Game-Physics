using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CircleCollisionHull2D : CollisionHull2D
{
    public float radius;

    override protected void Start()
    {
        base.Start();
        fake_constructor(CollisionHullType2D.hull_circle, this);
    }
    
    public override bool TestCollisionVsCircle(CircleCollisionHull2D other)
    {
        updatePosition();
        // could use dot product
        float sqrDistance = (position - other.position).SqrMagnitude(); //not sure this works for distance.
        float sqrRadii = radius + other.radius;
        sqrRadii *= sqrRadii;
        return sqrDistance <= sqrRadii;
    }

    public override bool TestCollisionVsAABB(AABBCollisionHull2D other)
    {
        updatePosition();
        // find the closest point to the circle on the box.
        // - Clamp the center of the circle to be in dimensions of box, gets closest point?
        Vector2 closest_point;
        
        closest_point.x = Mathf.Clamp(position.x, other.botLeftCorner.x, other.topRightCorner.x);
        closest_point.y = Mathf.Clamp(position.y, other.botLeftCorner.y, other.topRightCorner.y);

        // if closest point is within circle, pass. (point vs circle test). square for efficiency
        return (position - closest_point).SqrMagnitude() < radius * radius;
    }

    public override bool TestCollisionVsOBB(OBBCollisionHull2D other)
    {
        updatePosition();
        // same as above, but first
        // multiply circle center by invs world matrix of box to move to box space
        // 
        return false;
    }

}

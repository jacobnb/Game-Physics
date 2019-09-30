using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AABBCollisionHull2D :CollisionHull2D
{
    // Define the box
    public Vector2 botLeftCorner;
    public Vector2 topRightCorner;
    // Start is called before the first frame update
    public override bool TestCollisionVsCircle(CircleCollisionHull2D other)
    {
        // see circle
        return false;
    }

    public override bool TestCollisionVsAABB(AABBCollisionHull2D other)
    {
        // pass if, for all axes, max extent of A is greater than min extent of B
        // 1. .........
        return false;
    }

    public override bool TestCollisionVsOBB(OBBCollisionHull2D other)
    {
        // same as above, but first...
        // take axis extents of non-axis aligned box (make a bigger aabb) and run above test.
        // then, transform AABB into OBB's space, find max extents, run above test.
        // 1. .........
        return false;
    }
}

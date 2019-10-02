﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AABBCollisionHull2D :CollisionHull2D
{
    // Define the box
    public Vector2 botLeftCorner;
    public Vector2 topRightCorner;
    override protected void Start()
    {
        base.Start();
        fake_constructor(CollisionHullType2D.hull_aabb, this);
        initLineRenderer();
    }

    override protected void initLineRenderer()
    {
        lr.positionCount = 5; // box corners
        base.initLineRenderer();
    }

    private void Update()
    {
        // == Line Renderer for collider== //
        // get corners
        Vector2 trc = Vector2.zero;
        Vector2 blc = Vector2.zero;
        getDimensions(ref blc, ref trc);
        Vector3[] positions = new Vector3[5];
        // clockwise from bottom left coner
        positions[0] = new Vector3(blc.x, blc.y, 0);
        positions[1] = new Vector3(blc.x, trc.y, 0);
        positions[2] = new Vector3(trc.x, trc.y, 0);
        positions[3] = new Vector3(trc.x, blc.y, 0);
        positions[4] = new Vector3(blc.x, blc.y, 0);
        lr.SetPositions(positions);
    }
    // Start is called before the first frame update
    public override bool TestCollisionVsCircle(CircleCollisionHull2D other)
    {
        updatePosition();
        other.updatePosition();
        // find the closest point to the circle on the box.
        // - Clamp the center of the circle to be in dimensions of box, gets closest point?
        Vector2 closest_point;
        Vector2 blCorner = botLeftCorner + position;
        Vector2 trCorner = topRightCorner + position;
        closest_point.x = Mathf.Clamp(other.position.x, blCorner.x, trCorner.x);
        closest_point.y = Mathf.Clamp(other.position.y, blCorner.y, trCorner.y);

        // if closest point is within circle, pass. (point vs circle test). square for efficiency
        bool isColiding = (other.position - closest_point).SqrMagnitude() < other.radius * other.radius;
        return isColiding;
    }

    public void getDimensions(ref Vector2 botLeft, ref Vector2 topRight)
    {
        updatePosition();
        botLeft = botLeftCorner + position;
        topRight = topRightCorner + position;
    }
    public override bool TestCollisionVsAABB(AABBCollisionHull2D other)
    {
        updatePosition();
        other.updatePosition();
        bool passOnX = false;
        bool passOnY = false;
        // init corners. 
        Vector2 myBLC = Vector2.zero;
        Vector2 myTRC = myBLC;
        Vector2 oBLC = myBLC;
        Vector2 oTRC = myBLC;

        getDimensions(ref myBLC, ref myTRC);
        other.getDimensions(ref oBLC, ref oTRC);

        // check X
        // This assumes that the bounding box includes the position (center)
        //if(position.x < other.position.x)
        //{
        //    // this is to the left of other
        //    // if max >= min then pass.
        //    passOnX = myTRC.x >= oBLC.x;
        //}
        //else
        //{
        //    // this is to the right of the other
        //    // if other max >= my min
        //    passOnX = oTRC.x >= myBLC.x;
        //}

        ////check Y
        //if(position.y < other.position.y)
        //{
        //    // this is below other
        //    //if my max >= other min then pass.
        //    passOnY = myTRC.y >= oBLC.y;
        //}
        //else
        //{
        //    // this is above other
        //    // if other max >= my min then pass.
        //    passOnY = oTRC.y >= myBLC.y;
        //}

        // I think this does it better because no assumption required.
        passOnX = myTRC.x >= oBLC.x;
        passOnX = oTRC.x >= myBLC.x && passOnX;
        passOnY = myTRC.y >= oBLC.y;
        passOnY = oTRC.y >= myBLC.y && passOnY;


        bool isColiding = passOnX && passOnY;
        return isColiding;
    }

    public override bool TestCollisionVsOBB(OBBCollisionHull2D other)
    {
        // same as above, but first...
        // take axis extents of non-axis aligned box (make a bigger aabb) and run above test.
        // then, transform AABB into OBB's space, find max extents, run above test.
        // 1. get obb min / max
        // 2. transform obb min / max - breaks encapsulation?
        // 3. do AABB vs AABB
        // 4. if false RETURN
        // 5. transform ABB into OBB's space
        // 6. find max extents
        // 7. Run AABB vs AABB

        return false;
    }
}

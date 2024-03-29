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
    public override bool TestCollisionVsCircle(CircleCollisionHull2D other, ref Collision c)
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
    public override bool TestCollisionVsAABB(AABBCollisionHull2D other, ref Collision c)
    {
        updatePosition();
        other.updatePosition();
        // init corners. 
        Vector2 myBLC = Vector2.zero;
        Vector2 myTRC = myBLC;
        Vector2 oBLC = myBLC;
        Vector2 oTRC = myBLC;

        getDimensions(ref myBLC, ref myTRC);
        other.getDimensions(ref oBLC, ref oTRC);


        bool isColiding = checkOverlap(myTRC, myBLC, oTRC, oBLC);
        return isColiding;
    }

    public override bool TestCollisionVsOBB(OBBCollisionHull2D other, ref Collision c)
    {
        return other.TestCollisionVsAABB(this, ref c);
        //updatePosition();
        //other.updatePosition();
        //// init corners. 
        //Vector2 myBLC = Vector2.zero;
        //Vector2 myTRC = myBLC;
        //Vector2 oBLC = myBLC;
        //Vector2 oTRC = myBLC;

        //getDimensions(ref myBLC, ref myTRC);
        //// not needed other.getDimensions(ref oBLC, ref oTRC);
        //// same as above, but first...
        //// take axis extents of non-axis aligned box (make a bigger aabb) and run above test.
        //// then, transform AABB into OBB's space, find max extents, run above test.
        //// 1. get obb min / max
        //// 2. transform obb min / max - breaks encapsulation?
        //// 3. do AABB vs AABB
        //// 4. if false RETURN
        //// 5. transform ABB into OBB's space
        //// 6. find max extents
        //// 7. Run AABB vs AABB

        //// 1 & 2 & 3
        //bool isColiding = checkOverlap(myTRC, myBLC, other.xyMax(), other.xyMin());
        //// if not possibly colliding
        //if (!isColiding)
        //{
        //    // 4
        //    return isColiding;
        //}
        //// 5

        //// project corners along OBB's axii
        //// Project along up axis, get x Min, x max, y min, y max.
        //Vector2 axis = other.transform.up;
        //Vector2 mXMinYMax = new Vector2(myBLC.x, myTRC.y);
        //Vector2 mXMaxYMin = new Vector2(myTRC.x, myBLC.y);

        //// Project corners along first axis
        //Vector2 xyMinProj = other.project(myBLC, axis);
        //Vector2 xyMaxProj = other.project(myTRC, axis);
        //Vector2 XminYmaxProj = other.project(mXMinYMax, axis);
        //Vector2 XmaxYminProj = other.project(mXMaxYMin, axis);
        //float yMin = Mathf.Min(xyMinProj.y, xyMaxProj.y, XminYmaxProj.y, XmaxYminProj.y);
        //float yMax = Mathf.Max(xyMinProj.y, xyMaxProj.y, XminYmaxProj.y, XmaxYminProj.y);
        //float xMin = Mathf.Min(xyMinProj.x, xyMaxProj.x, XminYmaxProj.x, XmaxYminProj.x);
        //float xMax = Mathf.Max(xyMinProj.x, xyMaxProj.x, XminYmaxProj.x, XmaxYminProj.x);

        //// convert to terms to test in checkOverlap function
        //Vector2 myXYMax = new Vector2(xMax, yMax);
        //Vector2 myXYMin = new Vector2(xMin, yMin);
        //// TODO: need to project obb corners too.
        //// also other.xyMax() isn't actually a corner.
        //bool isCollidingOnUpAxis = checkOverlap(myXYMax, myXYMin, other.xyMax(), other.xyMin());

        //// Project corners along second axis
        //axis = other.transform.right;
        //xyMinProj = other.project(myBLC, axis);
        //xyMaxProj = other.project(myTRC, axis);
        //XminYmaxProj = other.project(mXMinYMax, axis);
        //XmaxYminProj = other.project(mXMaxYMin, axis);
        //yMin = Mathf.Min(xyMinProj.y, xyMaxProj.y, XminYmaxProj.y, XmaxYminProj.y);
        //yMax = Mathf.Max(xyMinProj.y, xyMaxProj.y, XminYmaxProj.y, XmaxYminProj.y);
        //xMin = Mathf.Min(xyMinProj.x, xyMaxProj.x, XminYmaxProj.x, XmaxYminProj.x);
        //xMax = Mathf.Max(xyMinProj.x, xyMaxProj.x, XminYmaxProj.x, XmaxYminProj.x);

        //// convert to terms to test in checkOverlap function
        //myXYMax = new Vector2(xMax, yMax);
        //myXYMin = new Vector2(xMin, yMin);
        //bool isCollidingOnRightAxis = checkOverlap(myXYMax, myXYMin, other.xyMax(), other.xyMin());

        //isColiding = isCollidingOnRightAxis && isCollidingOnUpAxis;
        //return isColiding;
    }

    public static bool checkOverlap(Vector2 mTopRight, Vector2 mBotLeft, Vector2 oTopRight, Vector2 oBotLeft)
    {
        bool passOnX = false;
        bool passOnY = false;
        passOnX = mTopRight.x >= oBotLeft.x;
        passOnX = oTopRight.x >= mBotLeft.x && passOnX;
        passOnY = mTopRight.y >= oBotLeft.y;
        passOnY = oTopRight.y >= mBotLeft.y && passOnY;
        return passOnX && passOnY;
    }
}

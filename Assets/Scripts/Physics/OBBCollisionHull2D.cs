using UnityEngine;

public class OBBCollisionHull2D : CollisionHull2D
{
    public Vector2 botLeftCorner;
    public Vector2 topRightCorner;
    float currentRotation;
    public bool pauseForDebug = false;
    // treat box as aligned to objects position / rotation.
    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();
        fake_constructor(CollisionHullType2D.hull_obb, this);
        initLineRenderer();
    }
    protected override void initLineRenderer()
    {
        lr.positionCount = 4; // box corners
        base.initLineRenderer();
    }
    // Update is called once per frame
    void Update()
    {
        // == Line Renderer for collider== //
        // get corners
        Vector2 trc = Vector2.zero;
        Vector2 blc = Vector2.zero;
        getDimensions(ref blc, ref trc);

        // just go along up / right axis because it's a square. 
        // Vector2 topRight = position + (Vector2)(transform.up * topRightCorner.y + transform.right * topRightCorner.x);
        // Vector2 botLeft = position + (Vector2)(transform.up * botLeftCorner.y + transform.right * botLeftCorner.x);

        Vector3[] positions = new Vector3[4];
        // clockwise 
        positions[0] = topRightTranslated();
        positions[1] = botRightTranslated();
        positions[2] = botLeftTranslated();
        positions[3] = topLeftTranslated();
        lr.SetPositions(positions);
    }
    public Vector2 xyMax()
    {
        Vector2 xymax;
        xymax.x = Mathf.Max(topRightTranslated().x
            , botRightTranslated().x
            , botLeftTranslated().x
            , topLeftTranslated().x);

        xymax.y = Mathf.Max(topRightTranslated().y
            , botRightTranslated().y
            , botLeftTranslated().y
            , topLeftTranslated().y);
        return xymax;
    }
    public Vector2 xyMin()
    {
        Vector2 xymin;
        xymin.x = Mathf.Min(topRightTranslated().x
            , botRightTranslated().x
            , botLeftTranslated().x
            , topLeftTranslated().x);

        xymin.y = Mathf.Min(topRightTranslated().y
            , botRightTranslated().y
            , botLeftTranslated().y
            , topLeftTranslated().y);
        return xymin;
    }
    public Vector2 topRightTranslated()
    {
        return position + (Vector2)(transform.up * topRightCorner.y + transform.right * topRightCorner.x);
    }
    public Vector2 botRightTranslated()
    {
        return position + (Vector2)(transform.up * botLeftCorner.y + transform.right * topRightCorner.x);
    }
    public Vector2 botLeftTranslated()
    {
        return position + (Vector2)(transform.up * botLeftCorner.y + transform.right * botLeftCorner.x);
    }
    public Vector2 topLeftTranslated()
    {
        return position + (Vector2)(transform.up * topRightCorner.y + transform.right * botLeftCorner.x);
    }

    public Vector2 project(Vector2 a, Vector2 onto)
    {
        onto.Normalize();
        // equation from slides
        // get magnitude of A in onto direction, multiply by onto.
        return Vector2.Dot(a, onto) * onto;
    }
    // THIS DOES NOT TRANSFORM DIMENSIONS
    public void getDimensions(ref Vector2 botLeft, ref Vector2 topRight)
    {
        updatePosition();

        botLeft = botLeftCorner;
        topRight = topRightCorner;



        // === Here are all the transforms that I tried in the wrong location. 
        // I think all of them are correct === //

        //Vector4 botLeft4 = new Vector4(botLeftCorner.x, botLeftCorner.y, 1, 1);
        //Vector4 topRight4 = new Vector4(topRightCorner.x, topRightCorner.y, 1, 1);

        //Matrix4x4 trs = Matrix4x4.TRS(transform.position, transform.rotation, Vector3.one);

        //botLeft = transform.localToWorldMatrix.inverse * (botLeftCorner - position);
        //botLeft += position;
        //topRight = transform.localToWorldMatrix.inverse * (topRightCorner - position);
        //topRight += position;

        // just go along up / right axis because it's a square. 
        // topRight = position + (Vector2)(transform.up * topRightCorner.y + transform.right * topRightCorner.x);
        // botLeft = position + (Vector2)(transform.up * botLeftCorner.y + transform.right * botLeftCorner.x);

        // Rotate to match object
        //float theta = transform.rotation.eulerAngles.z;
        //theta = currentRotation - theta;
        //currentRotation += theta;

        //float trcMag = trc.magnitude;
        //float blcMag = blc.magnitude;
        //x2=cosβx1−sinβy1
        //y2 =sinβx1+cosβy1
        //Vector2 newTRC;
        //Vector2 newBLC;
        //// should be able to do this with a matrix
        //newTRC.x = Mathf.Cos(theta) * trc.x - Mathf.Sin(theta) * trc.y;
        //newTRC.y = Mathf.Sin(theta) * trc.x + Mathf.Cos(theta) * trc.y;
        //newBLC.x = Mathf.Cos(theta) * trc.x - Mathf.Sin(theta) * trc.y;
        //newBLC.y = Mathf.Sin(theta) * trc.x + Mathf.Cos(theta) * trc.y;
    }

    public override bool TestCollisionVsCircle(CircleCollisionHull2D other, ref Collision c)
    {
        // See circle
        updatePosition();
        other.updatePosition();
        // same as above, but first
        // multiply circle center by invs world matrix of box to move to box space

        // neither of the these work.
        // Vector2 transformedPosition = transform.localToWorldMatrix.inverse * other.position;
        //Matrix4x4 trs = Matrix4x4.TRS(transform.position, transform.rotation, Vector3.one);
        // Vector2 transformedPosition = (trs* new Vector4(other.position.x, other.position.y, 0, 0));
        // Vector2 transformedPosition = other.position;

        // Vector2 closest_point;
        // Vector2 blc = Vector2.zero, trc = Vector2.zero; // bot left and top right of OBB
        // getDimensions(ref blc, ref trc);

        // //With above code works except for position and rotation.
        // //blc += position;
        // //trc += position;

        // // This fixes position but not rotation.
        //// blc = botLeftTranslated();
        // // trc = topRightTranslated();
        // // These aren't the right corners?

        // closest_point.x = Mathf.Clamp(transformedPosition.x, blc.x, trc.x);
        // closest_point.y = Mathf.Clamp(transformedPosition.y, blc.y, trc.y);

        // // if closest point is within circle, pass. (point vs circle test). square for efficiency
        // bool isColiding = (transformedPosition - closest_point).SqrMagnitude() < other.radius * other.radius; ;
        // return isColiding;

        // =========== Attempt 2 ============= //
        //  project circle center and this points onto axii
        // if circle point is within radius of point on both axii then true, else false.
        // can use clamp here too

        // Project circle and corners onto up axis
        Vector2 circleProj = project(other.position, transform.up);
        Vector2 corner1 = topRightTranslated(); 
        Vector2 corner2 = botRightTranslated();
        // should be able to ignore other two corners along axis because they'll be the same.
        Vector2 c1proj = project(corner1, transform.up);
        Vector2 c2proj = project(corner2, transform.up);
        // clamp circle proj to get closest point
        Vector2 closestPoint;
        closestPoint.x = Mathf.Clamp(circleProj.x, Mathf.Min(c1proj.x, c2proj.x), Mathf.Max(c1proj.x, c2proj.x));
        closestPoint.y = Mathf.Clamp(circleProj.y, Mathf.Min(c1proj.y, c2proj.y), Mathf.Max(c1proj.y, c2proj.y));
        // compare closest point to projected point.
        bool isCollidingOnUp = (circleProj - closestPoint).SqrMagnitude() < other.radius * other.radius;

        // repeat for right axis
        circleProj = project(other.position, transform.right);
        corner1 = topLeftTranslated();
        corner2 = topRightTranslated();
        c1proj = project(corner1, transform.right);
        c2proj = project(corner2, transform.right);
        closestPoint.x = Mathf.Clamp(circleProj.x, Mathf.Min(c1proj.x, c2proj.x), Mathf.Max(c1proj.x, c2proj.x));
        closestPoint.y = Mathf.Clamp(circleProj.y, Mathf.Min(c1proj.y, c2proj.y), Mathf.Max(c1proj.y, c2proj.y));
        bool isCollidingOnRight = (circleProj - closestPoint).SqrMagnitude() < other.radius * other.radius;
        return isCollidingOnRight && isCollidingOnUp;
    }

    public override bool TestCollisionVsAABB(AABBCollisionHull2D other, ref Collision c)
    {
        updatePosition();
        other.updatePosition();
        // init corners. 
        Vector2 oBLC = Vector2.zero;
        Vector2 oTRC = oBLC;

        other.getDimensions(ref oBLC, ref oTRC);
        // not needed other.getDimensions(ref oBLC, ref oTRC);
        // same as above, but first...
        // take axis extents of non-axis aligned box (make a bigger aabb) and run above test.
        // then, transform AABB into OBB's space, find max extents, run above test.
        // 1. get obb min / max
        // 2. transform obb min / max - breaks encapsulation?
        // 3. do AABB vs AABB
        // 4. if false RETURN

        // 1 & 2 & 3
        bool isColiding = AABBCollisionHull2D.checkOverlap(oTRC, oBLC, xyMax(), xyMin());
        // if not possibly colliding
        if (!isColiding)
        {
            // 4
            // return isColiding;
        }
        // 5
        // project AABB and OBB onto axii
        // check overlap on each axii
        
        // set up last two corners
        Vector2 oBRC = new Vector2(oTRC.x, oBLC.y);
        Vector2 oTLC = new Vector2(oBLC.x, oTRC.y);

        // project other on Up
        Vector2 oProj1 = project(oBLC, transform.up);
        Vector2 oProj2 = project(oBRC, transform.up);
        Vector2 oProj3 = project(oTRC, transform.up);
        Vector2 oProj4 = project(oTLC, transform.up);
        //Find min / max points
        Vector2 oMin, oMax;
        oMin.x = Mathf.Min(oProj1.x, oProj2.x, oProj3.x, oProj4.x);
        oMin.y = Mathf.Min(oProj1.y, oProj2.y, oProj3.y, oProj4.y);
        oMax.x = Mathf.Max(oProj1.x, oProj2.x, oProj3.x, oProj4.x);
        oMax.y = Mathf.Max(oProj1.y, oProj2.y, oProj3.y, oProj4.y);
        // project this on Up.
        Vector2 mProj1 = project(topLeftTranslated(), transform.up);
        Vector2 mProj2 = project(botLeftTranslated(), transform.up);
        Vector2 min, max;
        min.x = Mathf.Min(mProj1.x, mProj2.x);
        min.y = Mathf.Min(mProj1.y, mProj2.y);
        max.x = Mathf.Max(mProj1.x, mProj2.x);
        max.y = Mathf.Max(mProj1.y, mProj2.y);
        //if it doesn't work add in the last two corners and find min / max for this.
        bool isColidingOnUp = AABBCollisionHull2D.checkOverlap(max, min, oMax, oMin);

        //project other on Right
        oProj1 = project(oBLC, transform.right);
        oProj2 = project(oBRC, transform.right);
        oProj3 = project(oTRC, transform.right);
        oProj4 = project(oTLC, transform.right);
        //Find min / max points
        oMin.x = Mathf.Min(oProj1.x, oProj2.x, oProj3.x, oProj4.x);
        oMin.y = Mathf.Min(oProj1.y, oProj2.y, oProj3.y, oProj4.y);
        oMax.x = Mathf.Max(oProj1.x, oProj2.x, oProj3.x, oProj4.x);
        oMax.y = Mathf.Max(oProj1.y, oProj2.y, oProj3.y, oProj4.y);
        // project this on Right.
        mProj1 = project(topLeftTranslated(), transform.right);
        mProj2 = project(botRightTranslated(), transform.right);
        min.x = Mathf.Min(mProj1.x, mProj2.x);
        min.y = Mathf.Min(mProj1.y, mProj2.y);
        max.x = Mathf.Max(mProj1.x, mProj2.x);
        max.y = Mathf.Max(mProj1.y, mProj2.y);

        bool isColidingOnRight = AABBCollisionHull2D.checkOverlap(max, min, oMax, oMin);

        return isColidingOnRight && isColidingOnUp;
    }

    public override bool TestCollisionVsOBB(OBBCollisionHull2D other, ref Collision c)
    {
        if (pauseForDebug)
        {
            pauseForDebug = false;
        }
        updatePosition();
        other.updatePosition();
        // TODO: remove extra OBB corners when projecting onto axis where they'll be duplicated.
        // see vs Circle

        // same as AABB-OBB part2, twice
        Vector2 XminYmin=Vector2.zero;
        Vector2 XmaxYmax=Vector2.zero;
        Vector2 XminYMax=Vector2.zero;
        Vector2 XmaxYmin = Vector2.zero;
        Vector2 oXYMax = Vector2.zero, oXYMin = Vector2.zero;
        Vector2 mXYMax = Vector2.zero, mXYMin = Vector2.zero;



        // 1. project others corners onto this up axis
        XminYmin = other.topRightTranslated();
        XmaxYmax = other.botRightTranslated();
        XminYMax = other.botLeftTranslated();
        XmaxYmin = other.topLeftTranslated();
        projectCornersOnAxis(transform.up, ref oXYMax, ref oXYMin);

        // project this corners onto this up axis
        XminYmin = topRightTranslated();
        XmaxYmax = botRightTranslated();
        XminYMax = botLeftTranslated();
        XmaxYmin = topLeftTranslated();
        projectCornersOnAxis(transform.up, ref mXYMax, ref mXYMin);
        // check for overlap
        bool isCollidingOnThisUpAxis = AABBCollisionHull2D.checkOverlap(oXYMax, oXYMin, mXYMax, mXYMin);


        // 2. project others corners onto this right axis
        XminYmin = other.topRightTranslated();
        XmaxYmax = other.botRightTranslated();
        XminYMax = other.botLeftTranslated();
        XmaxYmin = other.topLeftTranslated();
        projectCornersOnAxis(transform.right, ref oXYMax, ref oXYMin);

        //project this corners onto this right axis
        XminYmin = topRightTranslated();
        XmaxYmax = botRightTranslated();
        XminYMax = botLeftTranslated();
        XmaxYmin = topLeftTranslated();
        projectCornersOnAxis(transform.right, ref mXYMax, ref mXYMin);
        // check for overlap
        bool isCollidingOnThisRightAxis = AABBCollisionHull2D.checkOverlap(oXYMax, oXYMin, mXYMax, mXYMin);


        // 3. project others corners onto others up axis
        XminYmin = other.topRightTranslated();
        XmaxYmax = other.botRightTranslated();
        XminYMax = other.botLeftTranslated();
        XmaxYmin = other.topLeftTranslated();
        projectCornersOnAxis(other.transform.up, ref oXYMax, ref oXYMin);

        // project this corners onto others up axis
        XminYmin = topRightTranslated();
        XmaxYmax = botRightTranslated();
        XminYMax = botLeftTranslated();
        XmaxYmin = topLeftTranslated();
        projectCornersOnAxis(other.transform.up, ref mXYMax, ref mXYMin);

        bool isCollidingOnOtherUpAxis = AABBCollisionHull2D.checkOverlap(oXYMax, oXYMin, mXYMax, mXYMin);

        // 4. project others corners onto others right axis
        XminYmin = other.topRightTranslated();
        XmaxYmax = other.botRightTranslated();
        XminYMax = other.botLeftTranslated();
        XmaxYmin = other.topLeftTranslated();
        projectCornersOnAxis(other.transform.right, ref oXYMax, ref oXYMin);

        // project this corners onto others right axis
        XminYmin = topRightTranslated();
        XmaxYmax = botRightTranslated();
        XminYMax = botLeftTranslated();
        XmaxYmin = topLeftTranslated();
        projectCornersOnAxis(other.transform.right, ref mXYMax, ref mXYMin);

        bool isCollidingOnOtherRightAxis = AABBCollisionHull2D.checkOverlap(oXYMax, oXYMin, mXYMax, mXYMin);

        // internal function to project corners onto given axis
        void projectCornersOnAxis(Vector2 axis, ref Vector2 XYMax, ref Vector2 XYMin)
        {
            Vector2 oXminYminProj = project(XminYmin, axis);
            Vector2 oXmaxYmaxProj = project(XmaxYmax, axis);
            Vector2 oXminYmaxProj = project(XminYMax, axis);
            Vector2 oXmaxYminProj = project(XmaxYmin, axis);
            // get min / max
            // TODO: I'm not sure just taking the min is right, but it might work anyway.
            // it might not actually be a point on the axis.
            float yMin = Mathf.Min(oXminYminProj.y, oXmaxYmaxProj.y, oXminYmaxProj.y, oXmaxYminProj.y);
            float yMax = Mathf.Max(oXminYminProj.y, oXmaxYmaxProj.y, oXminYmaxProj.y, oXmaxYminProj.y);
            float xMin = Mathf.Min(oXminYminProj.x, oXmaxYmaxProj.x, oXminYmaxProj.x, oXmaxYminProj.x);
            float xMax = Mathf.Max(oXminYminProj.x, oXmaxYmaxProj.x, oXminYmaxProj.x, oXmaxYminProj.x);

            // convert to terms to test in checkOverlap function
            XYMax = new Vector2(xMax, yMax);
            XYMin = new Vector2(xMin, yMin);
        };
        // TODO: short circuit if false;
        // Also get rid of repeated assigns to XminYmin etc.

        return isCollidingOnThisUpAxis && isCollidingOnThisRightAxis && isCollidingOnOtherUpAxis && isCollidingOnOtherRightAxis;
    }

}

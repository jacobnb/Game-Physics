using UnityEngine;

public class OBBCollisionHull2D : CollisionHull2D
{
    public Vector2 botLeftCorner;
    public Vector2 topRightCorner;
    float currentRotation;

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

    public override bool TestCollisionVsCircle(CircleCollisionHull2D other)
    {
        // See circle
        updatePosition();
        other.updatePosition();
        // same as above, but first
        // multiply circle center by invs world matrix of box to move to box space
        Vector2 transformedPosition = transform.localToWorldMatrix.inverse * other.position;
        Vector2 closest_point;
        Vector2 blc = Vector2.zero, trc = Vector2.zero; // bot left and top right of AABB
        getDimensions(ref blc, ref trc);
        closest_point.x = Mathf.Clamp(transformedPosition.x, blc.x, trc.x);
        closest_point.y = Mathf.Clamp(transformedPosition.y, blc.y, trc.y);

        // if closest point is within circle, pass. (point vs circle test). square for efficiency
        bool isColiding = (transformedPosition - closest_point).SqrMagnitude() < other.radius * other.radius; ;
        return isColiding;
    }

    public override bool TestCollisionVsAABB(AABBCollisionHull2D other)
    {
        // Might have to code this out for next lab

        return other.TestCollisionVsOBB(this);
    }

    public override bool TestCollisionVsOBB(OBBCollisionHull2D other)
    {
        updatePosition();
        other.updatePosition();
        // TODO: Something about this is position dependent.
        // When this is on axis, registers collision mostly correctly.
        // can't just move both to origin

        // same as AABB-OBB part2, twice
        Vector2 XminYmin = other.xyMin();
        Vector2 XmaxYmax = other.xyMax();
        Vector2 XminYMax = new Vector2(XminYmin.x, XmaxYmax.y);
        Vector2 XmaxYmin = new Vector2(XmaxYmax.x, XminYmin.y);
        Vector2 XYMax;
        Vector2 XYMin;
        // internal function to project corners onto given axis
        // SETS XYMax, XYMin
        void projectCornersOnAxis(Vector2 axis)
        {
            Vector2 oXminYminProj = project(XminYmin, axis);
            Vector2 oXmaxYmaxProj = project(XmaxYmax, axis);
            Vector2 oXminYmaxProj = project(XminYMax, axis);
            Vector2 oXmaxYminProj = project(XmaxYmin, axis);
            // get min / max
            float yMin = Mathf.Min(oXminYminProj.y, oXmaxYmaxProj.y, oXminYmaxProj.y, oXmaxYminProj.y);
            float yMax = Mathf.Max(oXminYminProj.y, oXmaxYmaxProj.y, oXminYmaxProj.y, oXmaxYminProj.y);
            float xMin = Mathf.Min(oXminYminProj.x, oXmaxYmaxProj.x, oXminYmaxProj.x, oXmaxYminProj.x);
            float xMax = Mathf.Max(oXminYminProj.x, oXmaxYmaxProj.x, oXminYmaxProj.x, oXmaxYminProj.x);

            // convert to terms to test in checkOverlap function
            XYMax = new Vector2(xMax, yMax);
            XYMin = new Vector2(xMin, yMin);
        };

        // 1. project others corners onto this up axis
        projectCornersOnAxis(transform.up);
        bool isCollidingOnThisUpAxis = AABBCollisionHull2D.checkOverlap(XYMax, XYMin, xyMax(), xyMin());


        // 2. project others corners onto this right axis
        projectCornersOnAxis(transform.right);
        bool isCollidingOnThisRightAxis = AABBCollisionHull2D.checkOverlap(XYMax, XYMin, xyMax(), xyMin());

        // Set corners for this
        XminYmin = xyMin();
        XmaxYmax = xyMax();
        XminYMax = new Vector2(XminYmin.x, XmaxYmax.y);
        XmaxYmin = new Vector2(XmaxYmax.x, XminYmin.y);

        // 3. project this corners onto others up axis
        projectCornersOnAxis(other.transform.up);
        bool isCollidingOnOtherUpAxis = AABBCollisionHull2D.checkOverlap(XYMax, XYMin, other.xyMax(), other.xyMin());

        // 4. project this corners onto others right axis
        projectCornersOnAxis(other.transform.up);
        bool isCollidingOnOtherRightAxis = AABBCollisionHull2D.checkOverlap(XYMax, XYMin, other.xyMax(), other.xyMin());

        // TODO: short circuit if false;

        return isCollidingOnThisUpAxis && isCollidingOnThisRightAxis && isCollidingOnOtherUpAxis && isCollidingOnOtherRightAxis;
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OBBCollisionHull2D : CollisionHull2D
{
    public Vector2 botLeftCorner;
    public Vector2 topRightCorner;
    float currentRotation;

    // treat box as aligned to objects position / rotation.
    // Start is called before the first frame update
    override protected void Start()
    {
        base.Start();
        fake_constructor(CollisionHullType2D.hull_obb, this);
        initLineRenderer();
    }
    override protected void initLineRenderer()
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

    override public bool TestCollisionVsCircle(CircleCollisionHull2D other)
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

    override public bool TestCollisionVsAABB(AABBCollisionHull2D other)
    {
        // Might regret this in next lab
        
        return other.TestCollisionVsOBB(this);
    }

    override public bool TestCollisionVsOBB(OBBCollisionHull2D other)
    {
        updatePosition();
        other.updatePosition();

        // same as AABB-OBB part2, twice
        Vector2 oXminYmin = other.xyMin();
        Vector2 oXmaxYmax = other.xyMax();
        Vector2 oXminYMax = new Vector2(oXminYmin.x, oXmaxYmax.y);
        Vector2 oXmaxYmin = new Vector2(oXmaxYmax.x, oXminYmin.y);

        // internal function to project corners onto given axis
        bool projectCornersOnAxis(Vector2 axis)
        {
            Vector2 oXminYminProj = project(oXminYmin, axis);
            Vector2 oXmaxYmaxProj = project(oXmaxYmax, axis);
            Vector2 oXminYmaxProj = project(oXminYMax, axis);
            Vector2 oXmaxYminProj = project(oXmaxYmin, axis);
            // get min / max
            float yMin = Mathf.Min(oXminYminProj.y, oXmaxYmaxProj.y, oXminYmaxProj.y, oXmaxYminProj.y);
            float yMax = Mathf.Max(oXminYminProj.y, oXmaxYmaxProj.y, oXminYmaxProj.y, oXmaxYminProj.y);
            float xMin = Mathf.Min(oXminYminProj.x, oXmaxYmaxProj.x, oXminYmaxProj.x, oXmaxYminProj.x);
            float xMax = Mathf.Max(oXminYminProj.x, oXmaxYmaxProj.x, oXminYmaxProj.x, oXmaxYminProj.x);

            // convert to terms to test in checkOverlap function
            Vector2 oXYMax = new Vector2(xMax, yMax);
            Vector2 oXYMin = new Vector2(xMin, yMin);
            return AABBCollisionHull2D.checkOverlap(oXYMax, oXYMin, xyMax(), xyMin());
        };

        // 1. project others corners onto this up axis
        bool isCollidingOnThisUpAxis = projectCornersOnAxis(transform.up);

        // 2. project others corners onto this right axis
        bool isCollidingOnThisRightAxis = projectCornersOnAxis(transform.right);

        // 3. project this corners onto others up axis
        bool isCollidingOnOtherUpAxis = projectCornersOnAxis(other.transform.up);

        // 4. project this corners onto others right axis
        bool isCollidingOnOtherRightAxis = projectCornersOnAxis(other.transform.right);

        // TODO: short circuit if false;

        return isCollidingOnThisUpAxis && isCollidingOnThisRightAxis && isCollidingOnOtherUpAxis && isCollidingOnOtherRightAxis;
    }

}

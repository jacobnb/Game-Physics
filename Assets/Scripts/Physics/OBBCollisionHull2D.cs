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
        // Translate top right corner
        positions[0] = position + (Vector2)(transform.up * topRightCorner.y + transform.right * topRightCorner.x);
        // Translate bot right corner
        positions[1] = position + (Vector2)(transform.up * botLeftCorner.y + transform.right * topRightCorner.x);
        // Translate bot left corner
        positions[2] = position + (Vector2)(transform.up * botLeftCorner.y + transform.right * botLeftCorner.x);
        // Translate top left corner
        positions[3] = position + (Vector2)(transform.up * topRightCorner.y + transform.right * botLeftCorner.x);
        lr.SetPositions(positions);       
    }

    // THIS DOES NOT TRANSFORM DIMENSIONS
        public void getDimensions(ref Vector2 botLeft, ref Vector2 topRight)
    {
        updatePosition();

        botLeft = botLeftCorner;
        topRight = topRightCorner;

        // Any of these work as transforms. 
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
        // see circle
        return false;
    }

    override public bool TestCollisionVsAABB(AABBCollisionHull2D other)
    {
        // See AABB
        return false;
    }

    override public bool TestCollisionVsOBB(OBBCollisionHull2D other)
    {
        // same as AABB-OBB part2, twice
        // 1. .....
        return false;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CircleCollisionHull2D : CollisionHull2D
{
    public float radius;
    private int pointsInCircle = 18;
    Vector3[] circlePoints;
    override protected void Start()
    {
        base.Start();
        fake_constructor(CollisionHullType2D.hull_circle, this);
        initLineRenderer();

        // == calc circle ==//
        float angle = 2*Mathf.PI / pointsInCircle;
        float theta = 0f;
        circlePoints = new Vector3[pointsInCircle];
        for (int i = 0; i < pointsInCircle; i++)
        {
            // generate a point at angle theta
            circlePoints[i] = new Vector3(radius * Mathf.Sin(theta), radius * Mathf.Cos(theta), 0);
            theta += angle;
        }
    }
    private void Update()
    {
        updatePosition();
        Vector3[] positions = new Vector3[pointsInCircle];

        // offset each circle point by current position
        for (int i = 0; i < pointsInCircle; i++)
        {
            positions[i] = (circlePoints[i] + new Vector3(position.x, position.y, 0));
        }
        lr.SetPositions(positions);
    }
    override protected void initLineRenderer()
    {
        lr.positionCount = pointsInCircle; // Circle
        base.initLineRenderer();
    }
    public override bool TestCollisionVsCircle(CircleCollisionHull2D other)
    {
        // check if sqr distance between the center is less that the square of the radii
        updatePosition();
        other.updatePosition();
        // could use dot product
        float sqrDistance = (position - other.position).SqrMagnitude(); 
        float sqrRadii = radius + other.radius;
        sqrRadii *= sqrRadii;

        bool isColiding = sqrDistance <= sqrRadii;
        return isColiding;
    }

    public override bool TestCollisionVsAABB(AABBCollisionHull2D other)
    {
        updatePosition();
        other.updatePosition();
        // find the closest point to the circle on the box.
        // - Clamp the center of the circle to be in dimensions of box, gets closest point?
        Vector2 closest_point;
        Vector2 blc = Vector2.zero, trc = Vector2.zero; // bot left and top right of AABB
        other.getDimensions(ref blc, ref trc);
        closest_point.x = Mathf.Clamp(position.x, blc.x, trc.x);
        closest_point.y = Mathf.Clamp(position.y, blc.y, trc.y);

        // if closest point is within circle, pass. (point vs circle test). square for efficiency
        bool isColiding = (position - closest_point).SqrMagnitude() < radius * radius; ;
        return isColiding;
    }

    public override bool TestCollisionVsOBB(OBBCollisionHull2D other)
    {
        updatePosition();
        other.updatePosition();
        // same as above, but first
        // multiply circle center by invs world matrix of box to move to box space
        Vector2 transformedPosition = other.transform.localToWorldMatrix.inverse * position;
        Vector2 closest_point;
        Vector2 blc = Vector2.zero, trc = Vector2.zero; // bot left and top right of AABB
        other.getDimensions(ref blc, ref trc); 
        closest_point.x = Mathf.Clamp(transformedPosition.x, blc.x, trc.x);
        closest_point.y = Mathf.Clamp(transformedPosition.y, blc.y, trc.y);

        // if closest point is within circle, pass. (point vs circle test). square for efficiency
        bool isColiding = (transformedPosition - closest_point).SqrMagnitude() < radius * radius; ;
        return isColiding;
    }

}

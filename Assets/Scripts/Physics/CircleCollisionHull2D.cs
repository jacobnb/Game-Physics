using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CircleCollisionHull2D : CollisionHull2D
{
    public float radius;
    public float restitution = 0.8f;
    private int pointsInCircle = 18;
    Vector3[] circlePoints;
    public void FakeStart()
    {
        this.Start();
    }
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
        if (lr)
        {
            lr.SetPositions(positions);
        }
    }
    override protected void initLineRenderer()
    {
        if (lr)
        {
            lr.positionCount = pointsInCircle; // Circle
            base.initLineRenderer();
        }
        
    }
    public override bool TestCollisionVsCircle(CircleCollisionHull2D other, ref Collision c)
    {
        c.a = this;
        c.b = other;
       // c.status
        // check if sqr distance between the center is less that the square of the radii
        updatePosition();
        other.updatePosition();
        // could use dot product
        float sqrDistance = (position - other.position).SqrMagnitude(); 
        float sqrRadii = radius + other.radius;
        sqrRadii *= sqrRadii;

        bool isColiding = sqrDistance <= sqrRadii;
        if(!isColiding) { return isColiding; }
        //contact point
        // http://paulbourke.net/geometry/circlesphere/
        Vector2 difference = other.position - position; //from position to other.position
        float distance = difference.magnitude;
        float radii = radius + other.radius;
        // distance = radii
        // Vector2 contact = position + difference;

        // Get point halfway between two centers.
        Vector2 contact = position + difference * radius / other.radius; // position difference.normalized * .5f * distance; should be same.
        Vector2 normal = (position-contact).normalized; // vector from contact to center
        float overlap = radii - distance; // not sure we need this.
        // edge cases - circles overlap completely, or one inside the other.

        c.contactCount = 1;
        c.contacts = new CollisionHull2D.Collision.Contact[c.contactCount];
        c.contacts[0].point = contact;
        c.contacts[0].normal = normal;
        c.contacts[0].restitution = restitution; // TODO: Is this coefficient or actual number?


        // closing velocity 
        // https://gamedev.stackexchange.com/questions/118162/how-to-calculate-the-closing-speed-of-two-objects
        //Vector2 diff = other.position - position;
        //Vector2 velDiff = other.particle2D.getVelocity() - particle2D.getVelocity();
        //float closingSpeed = Vector2.Dot(velDiff, diff) / diff.magnitude;
        //Relative velocity from book
        Vector2 relativeVelocity = particle2D.getVelocity()-other.getParticle2D().getVelocity();
        float separatingVel = Vector2.Dot(relativeVelocity, normal); // relativeVelocity * normal
        // https://math.stackexchange.com/questions/13261/how-to-get-a-reflection-vector
        // this would simulate hitting a hard object w/ no velocity loss.
        // Vector2 velReflectedOverN = particle2D.getVelocity() - 2 * Vector2.Dot(particle2D.getVelocity(), normal) * normal;
        // c.closingVelocity =  closingSpeed*velReflectedOverN.normalized;
        c.closingVelocity = -separatingVel*normal; //was -seperatingVel
        c.status = isColiding;
        return isColiding;
    }
    public bool TestCollisionVsCircle(CircleCollisionHull2D other)
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
    public override bool TestCollisionVsAABB(AABBCollisionHull2D other, ref Collision c)
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
        bool isColiding = (position - closest_point).SqrMagnitude() < radius * radius;

        // Contact Points
        Vector2 contact = closest_point;
        // Normal should still go to center of circle.
        Vector2 normal = (position - contact).normalized;

        return isColiding;
    }

    public override bool TestCollisionVsOBB(OBBCollisionHull2D other, ref Collision c)
    {
        return other.TestCollisionVsCircle(this, ref c);
        // TODO: modify c to get right contact data.
        // contact points will be the same
        // normals will be in opposite direction.
    }

}

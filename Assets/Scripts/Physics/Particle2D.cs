using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Particle2D : MonoBehaviour
{
    protected enum Algorithm
    {
        POS_EULER,
        POS_KINEMATIC,
        ROT_EULER,
        ROT_KINEMATIC,
        NONE
    }
    [SerializeField]
    bool shouldFollowSine_X, shouldFollowSine_Y;
    [SerializeField]
    protected Vector2 position, velocity, acceleration; // 1
    [SerializeField]
    protected float rotation, angular_vel, angular_accel;
    
    [SerializeField]
    protected Algorithm algorithm, secondAlgorithm;

    public Vector2 getPosition()
    {
        return position;
    }
    public Vector2 getVelocity()
    {
        return velocity;
    }
    public void setVelocity(Vector2 vel)
    {
        velocity = vel;
    }
    // 2
    void updatePositionsExplicitEuler(float dt)
    {
        // x(t+dt) = x(t) + v(t)dt
        // multiply by dt = take a small step.
        position = position + velocity * dt;
        // v(t + dt) = v(t) + v(t)dt
        velocity = velocity + acceleration * dt;
    }

    void updatePositionKinematic(float dt)
    {
        position = position + velocity * dt + 0.5f * acceleration * dt * dt;
        velocity = velocity + acceleration * dt;
    }

    void updateRotationEulerExplicity(float dt)
    {
        rotation = rotation + angular_vel * dt;
        angular_vel = angular_vel + angular_accel * dt;
    }

    void updateRotationKinematic(float dt)
    {
        rotation = rotation + angular_vel * dt + 0.5f * angular_accel * dt * dt;
        angular_vel = angular_vel + angular_accel * dt;
    }

    // we don't actually need to keep them below 360, but this should keep it to human readable.
    void reduceRotationAngles()
    {
        rotation = rotation > 360 ? rotation - 360 : rotation;
    }

    // Start is called before the first frame update
    void Start()
    {
        if (shouldFollowSine_X)
        {
            velocity.x = -2;
            if(secondAlgorithm < Algorithm.ROT_EULER)
            {
                velocity.x -= 2;
            }
        }
        if (shouldFollowSine_Y)
        {
            velocity.y = -2;
            if (secondAlgorithm < Algorithm.ROT_EULER)
            {
                velocity.y -= 2;
            }
        }
        if(position.x == 0 && position.y == 0)
        {
            position = gameObject.transform.position;
        }

        rotation = transform.rotation.eulerAngles.z;
    }

    void FixedUpdate()
    {
        Algorithm[] algArray = { algorithm, secondAlgorithm }; // turns out var doesn't work with arrays.
        // 3 choose integrator
        foreach(Algorithm alg in algArray)
        {
            switch (alg)
            {
                case Algorithm.POS_EULER:
                    updatePositionsExplicitEuler(Time.fixedDeltaTime);
                    break;
                case Algorithm.POS_KINEMATIC:
                    updatePositionKinematic(Time.fixedDeltaTime);
                    break;
                case Algorithm.ROT_EULER:
                    updateRotationEulerExplicity(Time.fixedDeltaTime);
                    break;
                case Algorithm.ROT_KINEMATIC:
                    updateRotationKinematic(Time.fixedDeltaTime);
                    break;
                default:
                    break;
            }
        }
        
        // update transform
        transform.position = position;
        transform.eulerAngles = new Vector3(0.0f, 0.0f, rotation);
        reduceRotationAngles();
        // 4
        // test by faking motion along a curve
        if (shouldFollowSine_X)
        {
            acceleration.x = 2*Mathf.Sin(Time.time);
        }
        if (shouldFollowSine_Y)
        {
            acceleration.y = 2 * Mathf.Sin(Time.time);
        }
        
    }
}

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
        ROT_KINEMATIC
    }
    [SerializeField]
    protected Vector2 position, velocity, acceleration; // 1
    [SerializeField]
    protected Vector2 rotation, rot_vel, rot_accel;

    [SerializeField]
    protected Algorithm algorithm;
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
        rotation = rotation + rot_vel * dt;
        rot_vel = rot_vel + rot_accel * dt;
    }

    void updateRotationKinematic(float dt)
    {
        rotation = rotation + rot_vel * dt + 0.5f * rot_accel * dt * dt;
        rot_vel = rot_vel + acceleration * dt;
    }

    // we don't actually need to keep them below 360, but this should keep it to human readable.
    void reduceRotationAngles()
    {
        rotation.x = rotation.x > 360 ? rotation.x - 360 : rotation.x;
        rotation.y = rotation.y > 360 ? rotation.y - 360 : rotation.y;

    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    void FixedUpdate()
    {
        // 3 choose integrator
        switch (algorithm)
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
        // update transform
        transform.position = position;
        transform.eulerAngles = rotation;
        reduceRotationAngles();
        // 4
        // test by faking motion along a curve
        acceleration.y = -Mathf.Sin(Time.time);
        acceleration.x = Mathf.Sin(Time.time);
    }
}

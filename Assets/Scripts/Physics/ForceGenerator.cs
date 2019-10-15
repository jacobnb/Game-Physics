using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForceGenerator : MonoBehaviour
{
    static Vector2 Vector2DProj(Vector2 vec1, Vector2 vec2)
    {
        // project v1 onto v2
        // https://www.ck12.org/book/CK-12-College-Precalculus/section/9.6/
        return (Vector2.Dot(vec1, vec2) / Vector2.Dot(vec2, vec2)) * vec2;
    }

    static Vector2 generateGravity(float particleMass, float gravity, Vector2 down)
    {
        // F = Mg
        Vector2 force = (down * (particleMass * gravity));
        return force;
    }

    static Vector2 GenerateForce_normal(Vector2 f_gravity, Vector2 surfaceNormal_unit)
    {
        // f_normal = proj(f_gravity, surfaceNormal_unit)
        Vector2 f_normal = Vector2DProj(f_gravity, surfaceNormal_unit);
        f_normal = -f_normal;
        return f_normal;
    }

    static Vector2 GenerateForce_sliding(Vector2 f_gravity, Vector2 f_normal)
    {
        // f_sliding = f_gravity + f_normal
        return (f_gravity + f_normal);
    }

    static Vector2 GenerateForce_friction_static(Vector2 f_normal, Vector2 f_opposing, float frictionCoefficient_static)
    {
        // currently this would convert to kinetic friction.
        // f_friction_s = -f_opposing if less than max, else -coeff*f_normal (max amount is coeff*|f_normal|)
        Vector2 f_op_norm = f_opposing;
        f_op_norm.Normalize();
        return (f_opposing.magnitude < frictionCoefficient_static * f_normal.magnitude ? -f_opposing : f_op_norm * -frictionCoefficient_static * f_normal.magnitude);
        // code for this in bp return f_opposing.magnitude < frictionCoefficient_static * f_normal.magnitude ? -f_opposing :  Vector2(0,0);
    }

    static Vector2 GenerateForce_friction_kinetic(Vector2 f_normal, Vector2 particleVelocity, float frictionCoefficient_kinetic)
    {
        // f_friction_k = -coeff*|f_normal| * unit(vel)
        particleVelocity.Normalize();
        return (particleVelocity * -frictionCoefficient_kinetic * f_normal.magnitude);
    }

    static Vector2 GenerateForce_drag(Vector2 particleVelocity, Vector2 fluidVelocity, float fluidDensity, float objectArea_crossSection, float objectDragCoefficient)
    {
        // https://www.grc.nasa.gov/WWW/k-12/airplane/drageq.html drag = co * density * velocity squred / 2.0 * area
        // f_drag = (p * u^2 * area * coeff)/2 (+fluid velocity?)

        // TODO: replace particle velocity with diff of particle velocity and fluid velocity
        Vector2 vel_diff = particleVelocity - fluidVelocity;
        float vel_diff_sqr_mag = Vector2.Dot(vel_diff, vel_diff); // b/c dan says size_squared doesn't work.
        Vector2 vel_diff_norm = vel_diff;
        vel_diff_norm.Normalize();
        // using 
        return vel_diff_norm * (objectDragCoefficient * (fluidDensity * -vel_diff_sqr_mag) / 2.0f * objectArea_crossSection);
    }

    static Vector2 GenerateForce_spring(Vector2 particlePosition, Vector2 anchorPosition, float springRestingLength, float springStiffnessCoefficient)
    {
        Vector2 springLength = anchorPosition - particlePosition;
        Vector2 springDir = springLength;
        springDir.Normalize();
        // f_spring = -coeff*(spring length - spring resting length)
        return springStiffnessCoefficient * (springLength.magnitude - springRestingLength) * springDir;


    }
}

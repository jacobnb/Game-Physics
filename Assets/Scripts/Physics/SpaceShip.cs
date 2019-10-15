using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpaceShip : MonoBehaviour
{
    Particle2D particle;
    public float thrusterPower = 10f;
    public float rotatorPower = 1f;
    public bool shouldConstrainRot = true; // For Assignment;
    Rigidbody rb;
    public Slider fuelDisplay;
    public float fuel = 3000f;
    float maxFuel;
    // TODO Implement fuel and UI
    // Start is called before the first frame update
    void Start()
    {
        maxFuel = fuel;
        particle = gameObject.GetComponent<Particle2D>();
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        fuelDisplay.value = fuel / maxFuel;
        if(fuel < 0f)
        {
            LoadScene.LoadLose();
        }
        bool didThrustVert = false;
        if (Input.GetKey(KeyCode.W))
        {
            fuel--;
            thrustForward();
            didThrustVert = true;
        }
        if (Input.GetKey(KeyCode.S))
        {
            fuel--;
            thrustBackward();
            didThrustVert = true;
        }
        if (!didThrustVert)
        {
            particle.setAcceleration(Vector2.zero);
        }
        if (Input.GetKey(KeyCode.D))
        {
            fuel--;
            thrustCW();
        }
        if (Input.GetKey(KeyCode.A))
        {
            fuel--;
            thrustCCW();
        }
        // constrain rotation to -pi pi
        if (shouldConstrainRot)
        {
            particle.constrainRotTo180ForDan();
        }
    }
    // Thrust forward
    void thrustForward()
    {
        Vector2 newAccel = transform.up;
        newAccel*= thrusterPower;
        particle.setAcceleration(newAccel);
    }
    // Thrust backwards
    void thrustBackward()
    {
        Vector2 newAccel = -transform.up;
        newAccel *= thrusterPower;
        particle.setAcceleration(newAccel);
    }
    // CCW yaw - rear left
    void thrustCCW()
    {
        float newRot = rotatorPower;
        particle.setRotationVel(newRot);
    }
    // CW yaw - rear right
    void thrustCW()
    {
        float newRot = -rotatorPower;
        particle.setRotationVel(newRot);
    }
}

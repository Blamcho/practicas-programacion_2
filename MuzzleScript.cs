using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MuzzleScript : MonoBehaviour
{
    private Vector2 muzzleDirection = default;


    public void SetDirection(Vector2 direction)
    {
        muzzleDirection = direction;

        if (direction == Vector2.right)
        {
            transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
        }
        if (direction == Vector2.left)
        {
            transform.localScale = new Vector3(-1.0f, 1.0f, 1.0f);
        }
    }

    public void DestroyMuzzle()
    {
        Destroy(gameObject);
    }
}

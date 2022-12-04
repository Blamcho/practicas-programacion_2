using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour
{
    [SerializeField] private float bulletSpeed = default;
    private Rigidbody2D bulletRigidbody2D = default;
    private Vector2 bulletDirection = default;
    private WaitForSeconds waitForSeconds1 = default;

    private void Awake()
    {
        bulletRigidbody2D = GetComponent<Rigidbody2D>();
        waitForSeconds1 = new WaitForSeconds(1f);
    }

    private void Start()
    {
        StartCoroutine("BulletLifeTime");
    }

    private void FixedUpdate()
    {
        bulletRigidbody2D.velocity = bulletDirection * bulletSpeed;
    }

    public void SetDirection(Vector2 direction)
    {
        bulletDirection = direction;

        if (direction == Vector2.right)
        {
            transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
        }
        if (direction == Vector2.left)
        {
            transform.localScale = new Vector3(-1.0f, 1.0f, 1.0f);
        }
    }

    public void DestroyBullet()
    {
        Destroy(gameObject);
    }

    IEnumerator BulletLifeTime()
    {
        yield return waitForSeconds1;
        DestroyBullet();
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            Destroy(collision.gameObject);
            DestroyBullet();
        }
    }
}

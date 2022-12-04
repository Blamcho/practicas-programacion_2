using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [SerializeField] private float speedMovement = default;
    [SerializeField] private float jumpForce = default;
    [SerializeField] private GameObject bulletPrefab = default;
    [SerializeField] private GameObject muzzlePrefab = default;
    private Rigidbody2D playerRigidBody2D = default;
    private Animator playerAnimator = default;
    private float horizontalMovement = default;
    private float runningDelayAnimationTime = default;
    private bool playerIsGrounded = default;
    private bool playerCanShoot = default;
    private bool playerCanMove = default;
    private WaitForSeconds waitForSeconds_4 = default;

    private void Awake()
    {
        playerRigidBody2D = GetComponent<Rigidbody2D>();
        playerAnimator = GetComponent<Animator>();
        playerIsGrounded = false;
        playerCanShoot = true;
        playerCanMove = true;
        waitForSeconds_4 = new WaitForSeconds(0.4f);
    }

    private void Update()
    {
        horizontalMovement = Input.GetAxisRaw("Horizontal");

        RunningAnimationController();

        VerifyIfThePlayerIsGrounded();

        FallingAnimationController();

        if (Input.GetKeyDown(KeyCode.W) && playerIsGrounded && playerCanMove)
        {
            Jump();
        }

        if (Input.GetKeyDown(KeyCode.Space) && playerIsGrounded && playerRigidBody2D.velocity.x == 0 && playerCanShoot && playerCanMove)
        {
            ShootingWhileIdle();
        }

        if (Input.GetKeyDown(KeyCode.Space) && !playerIsGrounded && playerCanShoot && playerCanMove)
        {
            ShootingWhileJumping();
        }

        if (Input.GetKey(KeyCode.Space) && playerIsGrounded && playerRigidBody2D.velocity.x != 0 && playerCanShoot && playerCanMove)
        {
            ShootingWhileRunning();
        }

        if (Input.GetKeyUp(KeyCode.Space) && playerIsGrounded && playerRigidBody2D.velocity.x != 0 && playerCanMove)
        {
            ShootingWhileRunningReleased();
        }

        if (Input.GetKeyDown(KeyCode.LeftControl) && playerIsGrounded && playerCanShoot && playerRigidBody2D.velocity.x == 0 && playerCanMove)
        {
            MeleeAttackWhileGrounded();
        }

        if (Input.GetKeyDown(KeyCode.LeftControl) && playerIsGrounded && playerCanShoot && playerRigidBody2D.velocity.x != 0 && playerCanMove)
        {
            playerCanMove = false;
            playerRigidBody2D.velocity = new Vector2(0f, playerRigidBody2D.velocity.y);
            MeleeAttackWhileGrounded();
        }

        if (Input.GetKeyDown(KeyCode.LeftControl) && !playerIsGrounded && playerCanShoot && playerCanMove)
        {
            MeleeAttackWhileJumping();
        }

    }

    private void FixedUpdate()
    {
        if (playerCanMove)
        {
            playerRigidBody2D.velocity = new Vector2(horizontalMovement * speedMovement, playerRigidBody2D.velocity.y);
        }
    }

    private void Jump()
    {
        JumpingAnimationController();
        playerRigidBody2D.AddForce(Vector2.up * jumpForce);
    }

    private void VerifyIfThePlayerIsGrounded()
    {
        
        if (Physics2D.Raycast(transform.position, Vector3.down, 2.5f))
        {
            playerIsGrounded = true;
            playerAnimator.SetBool("playerIsGrounded", true);
            playerAnimator.SetBool("playerIsFalling", false);
        }
        else
        {
            playerIsGrounded = false;
            playerAnimator.SetBool("playerIsGrounded", false);
        }
    }

    private void RunningAnimationController()
    {
        if (horizontalMovement < 0.0f)
        {
            PlayerIsMoving();
            transform.localScale = new Vector3(-1.0f, 1.0f, 1.0f);
            runningDelayAnimationTime = Time.time;
        }
        else
        {
            if (horizontalMovement > 0.0f)
            {
                PlayerIsMoving();
                transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
                runningDelayAnimationTime = Time.time;
            }
        }

        if (horizontalMovement == 0.0f)
        {
            if (Time.time >= runningDelayAnimationTime + 0.05f)
            {
                playerAnimator.SetBool("playerIsRunning", false);
            }
        }
     
    }

    private void PlayerIsMoving()
    {
        playerAnimator.SetBool("playerIsRunning", true);
    }

    private void JumpingAnimationController()
    {
        playerAnimator.SetTrigger("playerIsJumping");
    }

    private void FallingAnimationController()
    {
        if ((playerRigidBody2D.velocity.y < 0f) && !playerIsGrounded)
        {
            playerAnimator.SetBool("playerIsFalling", true);
        }
    }

    private void ShootingWhileIdle()
    {
        playerAnimator.SetTrigger("playerIdleShooting");
        playerCanMove = false;
        ShootIdle();
    }

    private void MeleeAttackWhileGrounded()
    {
        playerAnimator.SetTrigger("playerMeleeHit");
        playerCanMove = false;
        MeleeGrounded();
    }

    private void MeleeAttackWhileJumping()
    {
        playerAnimator.SetTrigger("playerMeleeJump");
        StartCoroutine("CooldownCoroutineMeleeGrounded");
    }

    private void ShootingWhileJumping()
    {
        playerAnimator.SetTrigger("playerJumpShooting");
        StartCoroutine("CooldownCoroutineIdle");
    }

    private void ShootingWhileRunning()
    {
        playerAnimator.SetBool("playerRunningAndShooting", true);
        ShootRun();
    }

    private void ShootingWhileRunningReleased()
    {
        playerAnimator.SetBool("playerRunningAndShooting", false);
    }

    private void MeleeGrounded()
    {
        StartCoroutine("CooldownCoroutineMeleeGrounded");
        StartCoroutine("IdleShootMoevementBlock");
    }

    private void ShootIdle()
    {
        StartCoroutine("CooldownCoroutineIdle");
        StartCoroutine("IdleShootMoevementBlock");
    }

    private void ShootRun()
    {
        StartCoroutine("CooldownCoroutineRun");
    }

    IEnumerator CooldownCoroutineRun()
    {
        playerCanShoot = false;
        yield return waitForSeconds_4;
        if (playerRigidBody2D.velocity.x != 0)
        {
            InstantiateMuzzle();
            InstantiateBullet();
        }
        yield return waitForSeconds_4;
        playerCanShoot = true;
    }

    IEnumerator CooldownCoroutineIdle()
    {
        playerCanShoot = false;
        yield return waitForSeconds_4;
        InstantiateMuzzle();
        InstantiateBullet();
        yield return waitForSeconds_4;
        playerCanShoot = true;
    }

    IEnumerator CooldownCoroutineMeleeGrounded()
    {
        playerCanShoot = false;
        yield return waitForSeconds_4;
        yield return waitForSeconds_4;
        playerCanShoot = true;
    }

    IEnumerator IdleShootMoevementBlock()
    {
        yield return waitForSeconds_4;
        yield return waitForSeconds_4;
        playerCanMove = true;
    }

    private void InstantiateBullet()
    {
        Vector3 direction;
        if (transform.localScale.x == 1.0f)
        {
            direction = Vector2.right;
        }
        else
        {
            direction = Vector2.left;
        }

        GameObject bullet = Instantiate(bulletPrefab, transform.position + direction * 1.5f, Quaternion.identity);
        bullet.GetComponent<BulletScript>().SetDirection(direction);
    }

    private void InstantiateMuzzle()
    {
        Vector3 direction;
        if (transform.localScale.x == 1.0f)
        {
            direction = Vector2.right;
        }
        else
        {
            direction = Vector2.left;
        }

        GameObject muzzle = Instantiate(muzzlePrefab, transform.position + direction * 1.5f, Quaternion.identity);
        muzzle.GetComponent<MuzzleScript>().SetDirection(direction);
    }

}

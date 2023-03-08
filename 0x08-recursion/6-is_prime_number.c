#include "main.h"

/**
  * prime - Funcrion that checks if number is prime number.
  * @a:- single user input.
  * @b:- single user input.
  * Return:- Always 0 (success).
  */


int prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else if (a > b)
	{
		prime(a, b + 1);
	}
	return (1);
}

/**
  * is_prime_number - Function that check if number is prime.
  * @n:- single user input.
  * Return:- Always 0 (success)
  */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

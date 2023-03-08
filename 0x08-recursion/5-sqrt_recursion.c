#include "main.h"

/**
  * squire - Function that squires numbers.
  * @j:- single user input.
  * @k:- single user input.
  * Return:- Always 0 (success).
  */

	int squire(int j, int k)
	{
		if (k * k > j)
			return (-1);

		else if (k * k == j)
			return (k);

		else
			return (squire(j, k + 1));

		return (1);

	}




/**
  * _sqrt_recursion - Function that checks if squire if natural.
  * @n:- single user input.
  * Return:- Always 0 (success).
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (squire(n, 1));
}

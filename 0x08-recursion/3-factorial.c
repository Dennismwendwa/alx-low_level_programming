#include "main.h"

/**
  * factorial - Function for factorial of number.
  * @n:- single user input.
  * Return:- Always 0 (success).
  */

int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);


	f = n * factorial(n - 1);
	return (f);

}

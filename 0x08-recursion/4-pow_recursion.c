#include "main.h"

/**
  * _pow_recursion - Function that raises number to 4.
  * @x:- single user input.
  * @y:- single user input.
  * Return:- Always 0 (success).
  */

int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	p = (x * (_pow_recursion(x, y - 1)));

	return (p);

}

#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - Function that prints the last digit.
  *
  * @nld: take input of integer.
  *
  * Return:- Always 0 (success)
  */

int print_last_digit(int nld)
{
	int jkl;

	jkl = (nld % 10);

	if (jkl < 0)
	{
		jkl = (-1 * jkl);

	}

	_putchar(jkl + '0');
	return (jkl);

}

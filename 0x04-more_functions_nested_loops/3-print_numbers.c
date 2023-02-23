#include "main.h"
#include <stdio.h>

/**
  * print_number:- function that prints numbers 0-9.
  * Return:- Always 0 (success)
  */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');

}

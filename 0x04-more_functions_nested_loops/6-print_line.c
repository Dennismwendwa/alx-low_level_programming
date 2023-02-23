#include "main.h"
#include <stdio.h>

/**
  * print_line - Function that prints lines.
  * @n:- one single input.
  * Return:- Always 0 (success).
  */

void print_line(int n)
{

	int i;

	if (n <= 0)
	{
		_putchar('\n');

	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);

		}

		_putchar('\n');

	}


}

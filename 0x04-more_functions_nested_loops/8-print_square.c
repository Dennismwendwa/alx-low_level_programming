#include "main.h"

/**
  * print_square - Function that prints squares.
  * @size:- single input digit.
  * Return:- Always 0 (success).
  */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');

	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);

			}
			_putchar('\n');

		}


	}


}

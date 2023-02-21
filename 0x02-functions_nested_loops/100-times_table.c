#include <stdio.h>
#include "main.h"
/**
  * print_times_table - function that prints the times table.
  * @n: single input.
  * Returns:- Always 0 (success)
  */
void print_times_table(int n)
{
	int num, tims, rest;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (tims = 1; tims <= n; tims++)
			{
				_putchar(',');
				_putchar(' ');

				rest = num * tims;

				if (rest <= 99)
					_putchar(' ');
				if (rest <= 9)
					_putchar(' ');

				if (rest >= 100)
				{
					_putchar((rest / 100) + '0');
					_putchar(((rest / 10)) % 10 + '0');
				}
				else if (rest <= 99 && rest >= 10)
				{
					_putchar((rest / 10) + '0');
				}
				_putchar((rest % 10) + '0');
			}

			_putchar('\n');
		}
	}
}

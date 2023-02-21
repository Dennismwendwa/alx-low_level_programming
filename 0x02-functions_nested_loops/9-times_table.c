#include <stdio.h>
#include "main.h"
/**
  * times_table - prints the 9 times table
  *
  * Return:- Always 0 (success)
  */
void times_table(void)
{
	int j;
	int k;
	int l;

	for (j = 0; j <= 9; j++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (k = 1; k <= 9; k++)
		{
			l = (j * k);
			if ((l / 10) > 0)
			{
				_putchar((l / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((l % 10) + '0');
			if (k < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

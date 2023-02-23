#include "main.h"
#include <stdio.h>

/**
  * more_numbers - Function that prints more numbers.
  * Return:- Always 0 (success).
  */

void more_numbers(void)
{
	int i = 0;
	int x;

	while (i <= 10)
	{
		

		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');

			}

			_putchar((x % 10) + '0');


		}



		_putchar('\n');
		i++;
	}


}

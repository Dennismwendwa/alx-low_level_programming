#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 - prints letters.
  *
  * Ruturn:- Always 0 (success)
  */

void print_alphabet_x10(void)
{
	int k = 0;
	int alpha;

	while (k < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;

		}

		_putchar('\n');
		k++;

	}

}

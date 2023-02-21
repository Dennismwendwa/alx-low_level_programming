#include <stdio.h>

/**
  * print_alphabe_x10 - prints alphabet 10 times
  * 
  * Ruturn:- Always 0 (0)
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
			putchar(alpha);
			alpha++;

		}

		putchar('\n');
		k++;

	}

}

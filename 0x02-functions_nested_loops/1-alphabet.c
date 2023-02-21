#include <stdio.h>

/**
  * print_alphabet - prints alphebet in lowercase.
  *
  * Return:- Always 0 (success)
  */

void print_alphabet(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);

	}

	_putchar('\n');

}

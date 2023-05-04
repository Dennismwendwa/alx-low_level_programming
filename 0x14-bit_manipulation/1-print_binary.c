
#include "main.h"

/**
  * print_binary - function that prints binary
  * @n:- pointer to number to be converted to binary
  * Return:- Always 0
  */

void print_binary(unsigned long int n)
{
	int bits = 0;
	unsigned int tmp;

	int k;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	tmp = n;
	while (tmp != 0)
	{
		bits++;
		tmp >>= 1;
	}

	for (k = bits - 1; k >= 0; k--)
	{
		if (n & (1u << k))
			_putchar('1');
		else
			_putchar('0');

	}
}

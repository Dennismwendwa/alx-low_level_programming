
#include "main.h"

/**
  * print_binary - function that convets binary frm decimal
  * @n:- number to convert
  * Return:- Always 0 (success)
  */

void print_binary(unsigned long int n)
{
	int k;
	unsigned long int fflag = 0;
	unsigned long int l;

	k = sizeof(n) * 8 - 1;


	while (k >= 0)
	{
		l = n >> k;

		if (l & 1)
			fflag = 1;
		if (fflag == 1)
			(l & 1) ? _putchar('1') : _putchar('0');

		k--;
	}

	if (n == 0)
		_putchar('0');
}

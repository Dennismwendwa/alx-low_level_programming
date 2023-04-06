
#include "main.h"

/**
  * flib_bits - function that flipsbits
  * @m:- single user input
  * @n:- single user input
  * Return:- Always 0 (success)
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int i;
	unsigned int size;

	size = (8 * sizeof(n) - 1);


	for (i = size; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
		{
			count++;
		}
	}
	return (count);
}

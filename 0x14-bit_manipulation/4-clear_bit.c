
#include "main.h"

/**
  * clear_bit - function that sets bit to zero
  * @n:- the given number
  * @index:- index of bit to set to zero
  * Return:- Always 0
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shujaa = 1;
	unsigned int tmp;
	unsigned int size;

	tmp = *n;
	size = sizeof(size_t) * 8;

	tmp >>= index;
	if (tmp & 1)
	{
		shujaa <<= index;

		*n ^= shujaa;
		return (1);
	}
	else
	{
		return (1);
	}

	if (index > size)
	{
		return (1);
	}
}

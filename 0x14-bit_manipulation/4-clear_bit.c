
#include "main.h"

/**
  * clear_bit - function that sets value of bit to 0
  * @index:- index of the bit
  * @n:- single user intput
  * Return:- Always 0 (success)
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	int l;
	int bit;

	l = ~(1 << index);
	*n = *n & l;
	size = index > 8 * sizeof(*n);

	bit = size ? -1 : 1;

	return (bit);
}

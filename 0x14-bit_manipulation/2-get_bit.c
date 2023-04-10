
#include "main.h"

/**
  * get_bit - function that returns number of bits
  * @index:- index of the bit
  * @n:- single user input
  * Return:- Always 0 (success)
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;
	int l;
	int bit;

	size = 8 * sizeof(n) - 1;
	l = (int)(n >> index) & 1;

	bit = (index > size) ? -1 : l;

	return (bit);
}

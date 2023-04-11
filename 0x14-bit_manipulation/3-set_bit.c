
#include "main.h"

/**
  * set_bit - function that set the value of bit to 1
  * @index:- index of the bit
  * @n:- single user input
  * Return:- Always 0 (success)
  */

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned int size;
	int l;

	if (n == 0)
		return (-1);


	size = 8 * sizeof(*n) - 1;
	l = (1 << index);


	*n = *n | l;
	return (1);


	if (index > size)
		return (-1);
}

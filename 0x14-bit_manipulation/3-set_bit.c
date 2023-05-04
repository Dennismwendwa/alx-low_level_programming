
#include "main.h"
/**
  * set_bit - function that sets bit to one
  * @n:- pointer to the number
  * @index:- index of the bit
  * Return:- Always 0
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shujaa = 1;
	unsigned int size;

	size = sizeof(size_t) * 8;


	shujaa <<= index;

	*n |= shujaa;

	if (index > size)
	{
		return (-1);
	}

	return (1);
}

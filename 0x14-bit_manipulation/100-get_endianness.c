
#include "main.h"
/**
  * get_endianness - function that check endiannness
  * Retun:- Always 0
  */

int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

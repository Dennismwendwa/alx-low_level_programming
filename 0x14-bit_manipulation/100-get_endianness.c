#include "main.h"

/**
  * get_endianness - Function that chech the endianness
  * Return:- Always 0 (success)
  */

int get_endianness(void)
{

	unsigned int j = 1;

	char *l = (char *) &j;

	if (*l)
	{
		return (1);
	}
	else
		return (0);
}

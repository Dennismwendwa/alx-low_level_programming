
#include "main.h"


/**
  * _memset - function that fills memory with constant byte.
  * @s:- single user input pointer.
  * @n:- single user input.
  * @b: constant byte.
  * Return:- Always 0 (success).
  */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;

	}
	return (s);
}


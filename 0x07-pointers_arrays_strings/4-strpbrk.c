#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - function that searches for any set of bytes from astring.
  * @s:- single user input.
  * @accept:- single user input.
  * Return:- Always 0 (success0 / returns pointer to bytes ins.
  */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;

	}
	return (NULL);

}

#include "main.h"
#include <stdio.h>

/**
  * _strcmp - Function that compares strings.
  * @s1:- single user input.
  * @s2:- single user input.
  * Return:- Always 0 (success)
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;

	}
	return (*s1 - *s2);
}

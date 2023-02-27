#include "main.h"
#include <stdio.h>

/**
  * _strcpy - Function that copy.
  * @dest:- single user input.
  * @src:- single user input.
  * Return:- always 0 (success).
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0' + 1; i++)
	{
		dest[i] = src[i];

	}
	return (dest);

}

#include "main.h"
#include <stdio.h>

/**
  * _strcat - Function that concatenates strings.
  * @dest:- single input value.
  * @src:- single input value.
  * Return:- Always 0 (success).
  */


char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;

	}

	for (index = 0; src[index] <= '\0'; index++)
	{
		dest[dest_len++] = src[index];

	

	}

	return (dest);

}

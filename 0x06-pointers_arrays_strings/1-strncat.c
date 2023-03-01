#include "main.h"
#include <stdio.h>

/**
  * _strcat - Function that concentrates two strings.
  * @dest:- The first string.
  * @src:- The second string.
  * @n:- the number of bytes to be used from src.
  * Return:- Always 0 (success). here we return the value of dest after joining.
  */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
	{
		dest_len++;

	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_len++] = src[i];

	}

	return (dest);

}

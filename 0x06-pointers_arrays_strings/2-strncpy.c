#include "main.h"
#include <stdio.h>

/**
  * _strncpy - Function that copies strings.
  * @dest:- single user input.
  * @src:- single user input.
  * @n:- naximum number of bytes.
  */


char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = src_len; index < n; index++)
	{
		dest[index] = '\0';

	}
	return (dest);

}

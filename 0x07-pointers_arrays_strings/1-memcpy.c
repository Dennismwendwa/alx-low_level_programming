#include "main.h"

/**
  * _memcpy - function that copies memory.
  * @dest:- memory area.
  * @src:- memory area.
  * @n:- size of memory to be copied.
  * Return:- Always 0 (success)
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);

}

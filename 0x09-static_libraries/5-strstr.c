#include "main.h"
#include <stdio.h>


/**
  * _strstr - Function that locates a substring.
  * @haystack:- single user input.
  * @needle:- single user input.
  * Return:- Always 0 (success) / returns pointer to the located string.
  */


char *_strstr(char *haystack, char *needle)
{

	int j;
	int k = 0;

	while (needle[k] != '\0')
	{
		k++;
	}

	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (j != k)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (NULL);
}

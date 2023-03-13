#include <stdio.h>
#include <stdlib.h>

#include "main.h"


/**
  * length - function that returns length of string.
  * @s:- single user input.
  * Return:- length.
  */

int length(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{

	}
	return (i);
}

/**
  * _strdup - Fuction that retuns pointer to copy string.
  * @str:- pointer to string input.
  * Return:- Always 0 (success).
  */

char *_strdup(char *str)
{
	char *ptr;
	int s;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	s = length(str) + 1;
	ptr = malloc(sizeof(char) * s);

	for (i = 0; i < s; i++)
	{
		if (ptr == NULL)
			return (NULL);

		ptr[i] = str[i];

	}
	return (ptr);
}

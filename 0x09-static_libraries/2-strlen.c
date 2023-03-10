#include "main.h"


/**
  * _strlen - a Function that checks the length of string.
  * @s:- single user input.
  * Return:- Always 0 (success).
  */

int _strlen(char *s)
{
	int i = 1;
	int leng = 0;
	char str = s[0];

	while (str != '\0')
	{
		leng++;
		str = s[i++];
	}

	return (leng);
}

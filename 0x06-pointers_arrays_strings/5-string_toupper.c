#include "main.h"
#include <stdio.h>

/**
  * string_toupper - Function that changes letters to uppper.
  * @str:- single user input.
  * Return:- Always 0 (success).
  */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		i++;
	}
	return (str);

}

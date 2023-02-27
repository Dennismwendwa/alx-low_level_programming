#include "main.h"
#include <stdio.h>

/**
  * rev_string - function that reverses a string.
  * @s:- single user input.
  */

void rev_string(char *s)
{
	char str = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter; i++)
	{
		counter--;
		str = s[i];
		s[i] = s[counter];
		s[counter] = str;
	}

}

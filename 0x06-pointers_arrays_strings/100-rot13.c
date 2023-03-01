#include "main.h"
#include <stdio.h>


/**
  * rot13 - function that encodes strings using rot13.
  * @s:- single user input.
  * Return:- Always 0 (success).
  */

char *rot13(char *s)
{
	int i;

	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] > 25) ? storel[s[i] - 97] : storeh[s[i] - 65];

		}

	}
	return (s);

}

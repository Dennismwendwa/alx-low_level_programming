#include "main.h"
#include <stdio.h>


/**
  * rot13 - function that encodes strings using rot13.
  * @s:- single user input.
  * Return:- Always 0 (success).
  */

char *rot13(char *s)
{
	int i = 0;
	int j;

	char letters[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z'};
	char rot13key[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z'};

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = rot13key[j];
				break;
			}
		}
		i++;
	}
	return (s);

}

#include "main.h"


/**
  * _strspn - Function that gets string of prefix substring.
  * @s:- single user input.
  * @accept:- single user input.
  * returns:- always 0 (success) / number of bytes in s.
  */

unsigned int _strspn(char *s, char *accept)
{
	int k,l;
	int m = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] != 32)
		{
			for (l = 0; accept[l] != '\0'; l++)
			{
				if (s[k] == accept[l])
					m++;
			}

		}
		else
			return (m);

	}
	return (m);

}

#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
  * string_nconcat - Function that concatenates strings.
  * @s1:- single user input
  * @s2:- single user input
  * @n:- size of bytes
  * Return:- Always 0 (success)
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count = 0, count2 = 0;
	unsigned int len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[count])
		count++;

	while (s2[len1])
		len1++;

	if (n >= len1)
		len2 = count + len1;
	else
		len2 = count + n;

	ptr = malloc(sizeof(char) * len2 + 1);
	if (ptr == NULL)
		return (NULL);

	len1 = 0;
	while (count2 < len2)
	{
		if (count2 <= count)
			ptr[count2] = s1[count2];

		if (count2 >= count)
		{
			ptr[count2] = s2[len1];
			len1++;
		}
		count2++;
	}
	ptr[count2] = '\0';
	return (ptr);
}

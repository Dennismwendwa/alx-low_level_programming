#include "main.h"
#include <stdlib.h>
/**
  * _strchr - function that locates a character in a string.
  * @c:- single user input.
  * @s:- single user input.
  * Return:- Always 0 (success).
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);

	}
	if (c == '\0')
		return (s);

	return (NULL);

}

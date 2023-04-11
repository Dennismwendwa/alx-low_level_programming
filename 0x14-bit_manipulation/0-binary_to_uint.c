
#include "main.h"

/**
  * binary_to_uint - function that converts binary to unsigned int
  * wegt - weight
  * number - decimal we are converting to
  * @b:- single user input
  * Return:- Always 0 (success)
  */

unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int wegt = 1;
	unsigned int tmp = 0;

	int i = strlen(b) - 1;

	for (; b[i]; wegt = wegt * 2, i--)
	{
		tmp = _atoi(b[i]);
		number += tmp * wegt;

		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	if (b == NULL)
		return (0);

	return (number);
}

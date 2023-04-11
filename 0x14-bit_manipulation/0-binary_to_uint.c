
#include "main.h"

/**
  * binary_to_uint - function that converts binary to unsigned int
  * wegt - weight
  * number - decimal we are converting to
  * @b:- single user input
  * Return:- Always 0 (success)
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int wegt = 1;

	int i = strlen(b) - 1;

	for (; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
		{
			number += wegt;
		}
		wegt *= 2;
	}

	if (b == NULL)
		return (0);

	return (number);
}

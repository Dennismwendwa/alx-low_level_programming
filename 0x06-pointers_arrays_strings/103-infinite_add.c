#include "main.h"
#include <stdio.h>

/**
  * add_strings - Add the numbers in two strings.
  * @n1:- single user input.
  * @n2:- single user input.
  * @r:- Buffer to store results.
  * @r_index:- current index of the buffer.
  * Return:- Always 0 (success).
  */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int i;
	int j = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		i = (*n1 - '0') + (*n2 - '0');
		i += j;
		*(r + r_index) = (i % 10) + '0';
		j = i / 10;

	}

	for (; *n1; n1--, r_index--)
	{
		i = (*n1 - '0') + j;
		*(r + r_index) = (i % 10) + '0';
		j = i / 10;

	}

	for (; *n2; n2--, r_index--)
	{
		i = (*n2 - '0') + j;
		*(r + r_index) = (i % 10) + '0';
		j = i / 10;

	}

	if (j && r_index >= 0)
	{
		*(r + r_index) = (j % 10) + '0';
		return (r + r_index);

	}

	else if (j && r_index < 0)
		return (0);

	return (r + r_index + 1);
}

/**
  * infinite_add - Function that adds two numbers.
  * @n1:- single user input.
  * @n2:- single user input.
  * @r:- the buffer to store the results.
  * @size_r:- size of the buffer.
  * Return:- Always 0 (success).
  */



char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int n1_len = 0;
	int n2_len = 0;


	for (i = 0; *(n1 + i); i++)
	{
		n1_len++;

	}

	for (i = 0; *(n2 + i); i++)
	{
		n2_len++;

	}

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
	{
		return (0);

	}

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));

}

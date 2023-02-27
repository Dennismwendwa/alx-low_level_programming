#include "main.h"
#include <stdio.h>

/**
  * print_rev - function that prints strings in reverse.
  * @s:- single user input.
  * Return:- Always 0 (success).
  */

void print_rev(char *s)
{
	int i;
	int n;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;

	}

	for (n = (counter - 1); n >= 0; n--)
	{
		_putchar(s[n]);

	}
	_putchar('\n');

}

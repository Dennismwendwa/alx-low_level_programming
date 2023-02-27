#include "main.h"
#include <stdio.h>

/**
  * puts_half - Function that prints heve of characters in a string.
  * @str:- single user input.
  */

void puts_half(char *str)
{
	int i;
	int j;
	int leng = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		leng++;
	}

	j = (leng / 2);

	if ((leng % 2) == 1)
	{
		j = ((leng + 1) / 2);
	}

	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}

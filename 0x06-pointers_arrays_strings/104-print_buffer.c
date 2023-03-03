#include "main.h"
#include <stdio.h>

/**
  * print_buffer - Function that prints buffer.
  * @b:- single user input.
  * @size:- size of buffer pointed by b.
  * Return:- Always 0 (success).
  */

void print_buffer(char *b, int size)
{
	int buff = 0;
	int i;
	int j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (buff < size)
	{
		i = size - buff < 10 ? size - buff : 10;
		printf("%08x: ", buff);
		for (j = 0; j < 10; j++)
		{
			if (j < i)
				printf("%02x", *(b + buff + i));
			else
				printf("  ");
			if (j % 2)
			{
				printf(" ");

			}
		}
		for (j = 0; j < i; j++)
		{
			int d = *(b + buff + j);

			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%c", d);

		}
		printf("\n");
		buff += 10;
	}
}

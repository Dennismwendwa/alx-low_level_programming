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
	int buff;
	int i;

	for (buff = 0; buff < size; buff += 10)
	{
		printf("%08x: ", buff);

		for (i = 0; i < 10; i++)
		{
			if ((i + buff) >= size)
			{
				printf("  ");
			}
			else
			{
				printf("%02x", *(b + i + buff));

				if ((i % 2) != 0 && i != 0)
				{
					printf(" ");
				}
			}
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + buff) >= size)
				break;

			else if (*(b + i + buff) >= 31 &&
					*(b + i + buff) <= 126)
				printf("%c", *(b + i + buff));
			else
				printf(".");
		}
		if (buff >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}

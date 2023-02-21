#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - function that prints natural numbers from 1 - 98.
  * @n: input value.
  * Return:- always 0 (success)
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");

			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}

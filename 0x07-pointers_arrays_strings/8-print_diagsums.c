#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_diagsums - function that prints sum of diagonal
  * square matrix integers.
  * @a:- single user input.
  * @size:- single user int put.
  * Return:- Always 0 (success)
  */

void print_diagsums(int *a, int size)
{
	int k = 0;
	int b = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (k <= (size * size))
	{
		sum1 = sum1 + a[k];
		k = k + size + 1;

	}

	while (b < (size * size - 1))
	{
		sum2 = sum2 + a[b];
		b = b + size - 1;

	}
	printf("%d, %d\n", sum1, sum2);

}

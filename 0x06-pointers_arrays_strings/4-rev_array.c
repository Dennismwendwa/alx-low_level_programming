#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Function that reverses arrays.
  * @a:- single user input.
  * @n:- single user input.
  */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;

	}
}

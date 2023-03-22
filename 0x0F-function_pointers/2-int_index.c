#include <stdio.h>
#include <stdlib.h>

#include "function_pointers.h"

/**
  * int_index - function that searches for integer
  * @array:- array of elements
  * @size:- size of the array
  * @cmp:- function pointer
  * Return:- Always 0 (success)
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);

	}
	return (-1);
}

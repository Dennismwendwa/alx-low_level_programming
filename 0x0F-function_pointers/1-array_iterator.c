#include <stdio.h>
#include <stdlib.h>

#include "function_pointers.h"

/**
  * array_iterator - function that executes another function
  * @array:- pointer to a function
  * @size:- size of array
  * @action:- function pointer
  * Return:- Always 0 (success)
  */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}

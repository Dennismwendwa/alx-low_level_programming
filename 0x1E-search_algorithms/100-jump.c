#include "search_algos.h"
#include <math.h>

size_t min(size_t k, size_t j);

/**
 * jump_search - function that search fo value using jump search
 * @array:- pointer to the array to search
 * @size:- size of the array
 * @value:- value to search for
 * Return:- Always 0
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t prev_idx = 0;

	if (!array || size == 0)
	{
		return (-1);
	}
	
	printf("Value checked array[%ld] = [%d]\n", prev_idx, array[prev_idx]);
	while (array[min(jump_step, size) - 1] < value)
	{
		
		prev_idx = jump_step;
		printf("Value checked array[%ld] = [%d]\n", min(jump_step, size) - 1, array[min(jump_step, size) - 1]);
		jump_step += sqrt(size);

		if (prev_idx >= size)
		{
			printf("Value checked array[%ld] = [%d]\n", size - 1, array[size - 1]);
			printf("Value checked array[%ld] = [%d]\n", prev_idx, array[prev_idx]);
			return (-1);
		}
	}

	while (array[prev_idx] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_idx, array[prev_idx]);
		prev_idx++;
		if (prev_idx == min(jump_step, size))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev_idx - 1, min(jump_step, size) - 1);
			printf("Value checked array[%ld] = [%d]\n", prev_idx - 1, array[prev_idx - 1]);
			return (-1);
		}
	}

	if (array[prev_idx] == value)
	{
		printf("Found %d at index: %ld\n", value, prev_idx);
		return (prev_idx);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev_idx, min(jump_step, size) - 1);
	return (-1);
}

/**
 * min - function that check for min value
 * @k:- value one
 * @j:- value two
 * Return:- Always 0
 */

size_t min(size_t k, size_t j)
{
	return ((k < j) ? k : j);
}

#include "search_algos.h"

int binary_search_recurs(int *array, int l, int h, int value);

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return binary_search_recurs(array, 0, size - 1, value);
}

int binary_search_recurs(int *array, int l, int h, int value)
{
	int mid = (l + h) / 2;
	int k;

	if ( l <= h)
	{
		printf("Searching in array: ");
		for (k = l; k <= h; k++)
		{
			if (k == h)
				printf("%d\n", array[k]);
			else
				printf("%d, ", array[k]);
		}

		if (array[mid] == value)
		{
			if (mid > 0 && array[mid - 1] == value)
				return (binary_search_recurs(array, l, mid, value));
			else
				return (mid);
		}
		else if (array[mid] < value)
		{
			return (binary_search_recurs(array, mid + 1, h, value));
		}
		else
			return (binary_search_recurs(array, l, mid - 1, value));
	}

	return (-1);

}

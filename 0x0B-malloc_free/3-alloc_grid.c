#include <stdio.h>
#include <stdlib.h>

#include "main.h"


/**
  * alloc_grid - function that returns pointer to 2D array.
  * @width:- single user input.
  * @height:- single user input.
  * Return:- Always 0 (success)
  */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);

		if (ptr[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(ptr[y]);

			free(ptr);

			return (NULL);
		}

		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}
	return (ptr);

}

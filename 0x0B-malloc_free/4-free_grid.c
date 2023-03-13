#include <stdio.h>
#include <stdlib.h>

#include "main.h"


/**
  * free_grid - that frees 2D arrays.
  * @grid:- single user input.
  * @height:- single user input.
  * Return:- Always 0 (success)
  */


void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

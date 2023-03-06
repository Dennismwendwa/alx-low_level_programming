#include "main.h"
#include <stdlib.h>

/**
  * print_chessboard - Function that prints chassboard.
  * @a:- single user input.
  */

void print_chessboard(char (*a)[8])
{
	int z, y;

	for (z = 0; z < 8; z++)
	{
		for (y = 0; y < 8; y++)
		{
			if (y == 7)
			{
				_putchar(a[z][y]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[z][y]);
			}

		}

	}

}

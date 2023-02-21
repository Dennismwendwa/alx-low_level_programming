#include <stdio.h>

/**
  * main - entry point.
  * Return:- alway 0 (success)
  */

int main(void)
{
	int j = 0;
	int sum = 0;

	while (j < 1024)
	{
		if ((j % 3) == 0 || (j % 5) == 0)
		{
			sum = sum + j;

		}
		j++;

	}

	printf("%d\n", sum);

	return (0);

}

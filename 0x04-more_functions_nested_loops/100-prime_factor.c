#include "main.h"
#include <stdio.h>
#include <math.h>

/**
  * main - entry point.
  * Return:- Always 0 (success).
  */

int main(void)
{
	long x, maxf;
	long num = 612852475143;
	double sqr = sqrt(num);

	for (x = 1; x <= sqr; x++)
	{
		if (num % x == 0)
		{
			maxf = num / x;

		}

	}

	printf("%ld\n", maxf);



	return (0);
}

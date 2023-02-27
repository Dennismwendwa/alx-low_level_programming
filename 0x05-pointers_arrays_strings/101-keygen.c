#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
  * main - entry point.
  * Return:- Always 0 (success).
  */

int main(void)
{
	int myrand;
	int count;
	int total = 5084;

	srand(time(NULL));
		for (count = 0; total > 20; count++)
		{
			myrand = (rand() % 108) + 1;
			printf("%dc", myrand);
			total -= myrand;

		}
	printf("%c\n", total);

	return (0);
}

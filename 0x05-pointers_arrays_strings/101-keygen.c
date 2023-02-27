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
	int total = 2772;

	srand(time(NULL));
		for (count = 0; total > 122; count++)
		{
			myrand = (rand() % 125) + 1;
			printf("%dc", myrand);
			total -= myrand;

		}
	printf("%c", total);

	return (0);
}

#include "main.h"
#include <stdio.h>
/**
  * main - entry point.
  * Return:- Always 0 (success).
  */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		int Fizz = i % 3;
		int Buzz = i % 5;

		if (Fizz == 0 && Buzz == 0)
		{
			printf("FizzBuzz");
		}
		else if (Fizz == 0)
		{
			printf("Fizz");
		}
		else if (Buzz == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");

	return (0);
}

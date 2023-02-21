#include <stdio.h>

/**
  * main - entry point.
  * Return:- Always 0 (success)
  */

int main(void)
{
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long sum;
	float totalSum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			totalSum = totalSum + sum;

		fib1 = fib2;
		fib2 = sum;


	}
	printf("%.0f\n", totalSum);


	return (0);


}

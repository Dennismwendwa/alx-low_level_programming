#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"

/**
  * sum_them_all - Function that sums all of its args.
  * @n:- args start.
  * Return:- Always 0 (success)
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);
	return (sum);
}

#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers
  * @separator:- string to be printed.
  * @n:- number of integers passed to string.
  * Return:- Always 0 (success)
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		else if (separator == NULL)
			continue;
	}
	printf("\n");
}

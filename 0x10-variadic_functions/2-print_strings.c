#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"

/**
  * print_strings - function that prints strings
  * @separator:- string to be printed
  * @n:- number of strings passed
  * Return:- Always 0 (success)
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}

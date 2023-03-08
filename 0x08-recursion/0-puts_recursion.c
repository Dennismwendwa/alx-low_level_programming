#include "main.h"

/**
  * _puts_recursion - Function that prints string.
  * @s:- single user input.
  * Return:- Always 0 (success).
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

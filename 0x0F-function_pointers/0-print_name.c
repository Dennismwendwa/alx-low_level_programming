#include <stdio.h>
#include <stdlib.h>

#include "function_pointers.h"

/**
  * print_name - Function prints name
  * @name:- single user input
  * @f:- pointer to function
  * Return:- Always 0 (success)
  */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}

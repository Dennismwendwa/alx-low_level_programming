#include "main.h"


/**
  * _islower - function that checks for lowercase letters
  *
  * Return:- Always 0 (succuss)
  * @c: one letter input
  */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

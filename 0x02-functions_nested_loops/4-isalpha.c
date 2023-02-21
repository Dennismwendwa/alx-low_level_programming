#include <stdio.h>

/**
  * _isalpha - this is a functions which checks for alphabetic characters.
  *
  * @c - the parameter which the function takes.
  *
  * Return:- Always 0 (success)
  */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);

	}
	else
	{
		return (0);

	}

}

#include "main.h"
#include <stdio.h>


/**
  * _abs - function that computes absolute values of integer.
  *
  * @ab: single number input.
  *
  * Return:- always 0 (success)
  */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

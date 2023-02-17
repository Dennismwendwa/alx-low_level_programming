#include <stdio.h>

/**
  * main - Entry point
  *
  * Return:- Always 0 (success)
  */

int main(void)
{
int num = 0;

for (; num < 10; num++)
	putchar((num % 10) + '0');
putchar('\n');

return (0);
}

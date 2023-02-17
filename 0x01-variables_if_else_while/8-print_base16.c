#include <stdio.h>

/**
  * main - entry point
  *
  * Return:- Always 0 (success)
  */

int main(void)
{
int num = 0;
char alpha = 'a';

for (; num < 10; num++)
putchar((num % 10) + '0');

for (; alpha <= 'f'; alpha++)
putchar(alpha);

putchar('\n');



return (0);
}

#include <stdio.h>

/**
  * main - main entry point
  *
  * Return:- Always 0 (success)
  */

int main(void)
{
char alpha;

for (alpha = 'a'; alpha < 'z'; alpha++)
{
if (alpha != 'q' && alpha != 'e')
	putchar(alpha);
}

putchar('\n');

return (0);
}

#include <stdio.h>

/**
  * main - main entry point
  *
  * Return - Always return 0 (success)
  */
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);

for (alpha = 'A'; alpha <= 'Z'; alpha++)
	putchar(alpha);

putchar('\n');

return (0);
}

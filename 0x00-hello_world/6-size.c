#include <stdio.h>

/**
  * Entry - main Entry point
  *
  * Return: Always 0 (success)
  */

int main(void)
{

char letters;
int myNum;
long longNum;
long long doubleNum;
float money;

printf("Size of the char is %lu\n", (unsigned)sizeof(letters));
printf("Size of the int is %lu\n", (unsigned)sizeof(myNum));
printf("Size of the long is %lu\n", (unsigned)sizeof(longNum));
printf("Size of the long long is %lu\n", (unsigned)sizeof(doubleNum));
printf("Size of the float is %lu\n", (unsigned)sizeof(money));

return (0);
}

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
double doubleNum;
float money;

printf("Size of the char is %d\n", (unsigned)sizeof(letters));
printf("Size of the int is %d\n", (unsigned)sizeof(myNum));
printf("Size of the long is %d\n", (unsigned)sizeof(longNum));
printf("Size of the long long is %d\n", (unsigned)sizeof(doubleNum));
printf("Size of the float is %d\n", (unsigned)sizeof(money));

return (0);
}

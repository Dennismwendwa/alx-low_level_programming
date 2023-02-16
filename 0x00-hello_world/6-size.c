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

printf("Size of the char is %d byte(s)\n", (unsigned)sizeof(letters));
printf("Size of the char is %d byte(s)\n", (unsigned)sizeof(myNum));
printf("Size of the char is %d byte(s)\n", (unsigned)sizeof(longNum));
printf("Size of the char is %d byte(s)\n", (unsigned)sizeof(doubleNum));
printf("Size of the char is %d byte(s)\n", (unsigned)sizeof(money));

return (0);
}

#include <stdio.h>

/**
  * main - main Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{

char letters;
int myNum;
long longNum;
long long l;
float money;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(letters));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(myNum));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longNum));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(money));

return (0);
}

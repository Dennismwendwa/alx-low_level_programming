#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point.
  * @argc:- commandline args
  * @argv:- commandline args.
  * Return:- Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int i;

	int num1;
	int num2;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);

			mult = num1 * num2;
		}

	}
	printf("%d\n", mult);

	return (0);
}

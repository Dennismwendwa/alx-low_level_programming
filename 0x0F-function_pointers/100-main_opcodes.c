#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * Return:- Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int btes;
	int i;
	char *arry;

	if (argc != 2)
	{
		printf("Error\n");
		exit(i);
	}
	btes = atoi(argv[1]);

	if (btes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arry = (char *)main;

	for (i = 0; i < btes; i++)
	{
		if (i == btes - 1)
		{
			printf("%02hhx\n", arry[i]);
			break;
		}

		printf("%02hhx ", arry[i]);
	}
	return (0);
}

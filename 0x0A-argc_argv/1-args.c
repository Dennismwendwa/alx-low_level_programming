#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point.
  * @argc:- commandline args.
  * @argv:- commandline args array values
  * Return:- Always 0 (success)
  */


int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	argv = argv;

	for (i = 1; i < argc; i++)
		count++;
	printf("%d\n", count);

	return (0);

}

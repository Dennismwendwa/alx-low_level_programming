#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point.
  * @argc:- commandline args.
  * @argv:- commandline args.
  * Return:- Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;
	int num;
	int cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[1]);
			printf("%d\n\n", num);
			if (num > 25)
			{
				while (num >= 25)
					num -= 25, cent++;
			}
			if (num > 10 && num < 25)
			{
				while (num >= 10)
					num -= 10, cent++;
			}
			if (num > 5 && num < 10)
			{
				while (num >= 5)
					num -= 5, cent++;
			}
			if (num > 2 && num < 5)
			{
				while (num >= 2)
					num -= 2, cent++;
			}
			if (num == 1 || num == 2 || num == 5 || num == 10 || num == 25)
			{
				cent++;
			}
		}
	printf("%d\n", cent);
	return (0);
}

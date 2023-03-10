#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * is_digit - Function that checks if number is digit.
  * @s:- single user input.
  * Return:- Always 0 (success)
  */

int is_digit(char *s)
{
	int i = 0;
	int num = 0;
	int len;

	len = strlen(s);

	while (i < len)
	{
		if (s[i] < '0' || s[i] > '9')
			return (-1);

		else
			num = num * 10 + (s[i] - '0');

		i++;
	}
	return (num);
}




/**
  * main - enrty point.
  * @argc:- commandline input.
  * @argv:- commandline input.
  * Return:- Always 0 (success).
  */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int num;


	for (i = 1; i < argc; i++)
	{
		num = is_digit(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (0);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);


	return (0);
}

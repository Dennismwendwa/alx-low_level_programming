#include <stdio.h>
#include <stdlib.h>

#include "main.h"


/**
  * is_digit - checks if string is digit or not
  * @s:- single user input
  * Return:- Always 0 (success)
  */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}


/**
  * _strlen - function that checks length of string.
  * @s:- single user input.
  * Return:- Always 0 (success)
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
  * exit_err - function that exits
  */

void exit_err(void)
{
	printf("Error\n");
	exit(98);
}



/**
  * main - function that multiplies two numbers.
  * @argv:- commandline args
  * @argc:- commandline args
  * @num1:- single user input.
  * @num2:- single user input
  * Return:- Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int len1, len2, len, i, *result;
	int num1, num2, carr, x = 0;

	char *s1, *s2;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3|| !is_digit(s1) || !is_digit(s2))
		exit_err();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);

	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len2 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		carr = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			carr += result[len1 + len2 + 1] + (num1 * num2);
			result[len1 + len2] = carr % 10;
			carr /= 10;
		}
		if (carr > 0)
			result[len1 + len2 + 1] += carr;
	}
		for (i = 0; i < len - 1; i++)
		{
			if (result[i])
				x = 1;
			if (x)
				_putchar(result[i] + '0');
		}
		if (!x)
			_putchar('0');
		_putchar('\n');
		free(result);
	return (0);
}

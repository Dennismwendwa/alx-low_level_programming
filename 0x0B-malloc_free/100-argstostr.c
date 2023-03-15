#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
  * argstostr - function that joins args.
  * @ac:- single user input.
  * @av:- single user input.
  * Return:- Always 0 (success)
  */

char *argstostr(int ac, char **av)
{
	int ch = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}
		j = 0;
		i++;
	}
	ptr = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	ptr[k] = '\0';
	return (ptr);
}

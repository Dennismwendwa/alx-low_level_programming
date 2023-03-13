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
	int siz;
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = 0; count < ac; count++)
	{
		for (count1 = 0; av[count][count1] != '\0'; count++)
		{
			siz = siz + 1;
		}

		siz = siz + 1;
	}
	siz = siz + 1;

	ptr = malloc(sizeof(char) * siz);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (count = 0; count < ac; count++)
	{
		for (count1 = 0; av[count][count1] != '\0'; count1++)
		{
			ptr[count2] = av[count][count1];
			count2++;
		}
		ptr[count2] = '\n';
		count2++;
	}
	ptr[count2] = '\0';
	return (ptr);
}

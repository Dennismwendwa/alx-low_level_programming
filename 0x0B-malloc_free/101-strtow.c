#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
  * word_length - function that checks length of words.
  * @str:- single user input.
  * Return:- Always 0 (success)
  */

int word_length(char *str)
{
	int i = 0;
	int length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}
	return (length);
}


/**
  * words_count - Function that counts words
  * @str:- single user input.
  * Return:- Always 0 (success)
  */

int words_count(char *str)
{
	int i = 0;
	int wordC = 0;
	int length = 0;

	for (i = 0; *(str + i); i++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			wordC++;
			i += word_length(str + i);
		}
	}
	return (wordC);
}

/**
  * strtow - function that splits strings to words
  * @str:- single user input
  * Return:- Always 0 (success)
  */

char **strtow(char *str)
{
	char **string;
	int i = 0;
	int word,  w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = words_count(str);
	if (word == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
		return (NULL);

	for (w = 0; w < word; w++)
	{
		while (str[i] == ' ')
			i++;
	letter = word_length(str + i);

	string[w] = malloc(sizeof(char) * (letter + 1));

	if (string[w] == NULL)
	{
		for (; w >= 0; w--)
			free(string[w]);

		free(string);
		return (NULL);
	}

	for (l = 0; l < letter; l++)
	{
		string[w][l] = str[i++];
	}
	string[w][l] = '\0';
	}
	string[w] = NULL;
	return (string);
}

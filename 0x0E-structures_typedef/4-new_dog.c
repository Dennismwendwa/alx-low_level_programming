#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * _strlen - Function that checks length of str
  * @s:- single user input
  * Return:- Always 0 (success)
  */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
		c++;

	return (c);

}

/**
  * _strcpy - function that copy string
  * @dest:- single user input
  * @src:- single user input
  * Return: Always 0 (success)
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates new dog.
 * @name:- first member
 * @age:- second member
 * @owner:- third member
 * Return:- Always 0 (success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1;
	int len2;
	dog_t *ndog;

if (name != NULL && owner != NULL)
{
	len1 = _strlen(name) + 1;
	len2 = _strlen(owner) + 1;
	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * len1);

	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * len2);

	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	ndog->name = _strcpy(ndog->name, name);
	ndog->owner = _strcpy(ndog->owner, owner);
	ndog->age = age;
}
return (ndog);

}

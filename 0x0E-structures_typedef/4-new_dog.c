#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * new_dog - function that creates new dog.
 * @name:- first member
 * @age:- second member
 * @owner:- third member
 * Return:- Always 0 (success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int len1;
	int len2;
	dog_t *ndog;

	len1 = len2 = 0;

	while (name[len1++])
		;
	while (owner[len2++])
		;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(len1 * sizeof(ndog->name));
	if (ndog == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ndog->name[i] = name[i];

	ndog->age = age;

	ndog->owner = malloc(len2 * sizeof(ndog->owner));
	if (ndog == NULL)
		return (NULL);
	for (i = 0; i < len2; i++)
		ndog->owner[i] = owner[i];

	return (ndog);
}

#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * init_dog - function that creates struct dog..
 * @d:- struct name
 * @name:- first member
 * @age:- second member
 * @owner:- third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

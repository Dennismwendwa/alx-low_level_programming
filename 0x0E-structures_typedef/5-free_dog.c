#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * free_dog - function that frees dog
 * @d:- dog pointer
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);

}

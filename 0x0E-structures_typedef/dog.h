
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct name.
 * @name:- struct member 1
 * @age:- struct member 2
 * @owner:- struct member 3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif

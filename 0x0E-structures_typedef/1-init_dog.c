/*
 * File: 1-init_dog.c
 * Auth: Cameron
 */

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init dog
 * @d: the Dog
 * @name: Dogs name
 * @age: Age of dog
 * @owner: dogs owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

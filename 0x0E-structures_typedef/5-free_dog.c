/*
 * File: 5-free_dog.c
 * Auth: Cameron
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

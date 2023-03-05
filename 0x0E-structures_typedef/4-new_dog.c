#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - dog Data
 * @d: dog
 * @name: Dogs name
 * @age: dogs age
 * @owner: Dog Owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

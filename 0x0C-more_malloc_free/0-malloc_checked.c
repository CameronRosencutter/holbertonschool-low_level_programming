#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - main
 * @b: input amount
 * Return: final
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}

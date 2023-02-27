#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * array_range - create array
 * @min: beginning elements
 * @max: End elements
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, j = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(max - min + 1);
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		array[j] = i;
	return (array);
}

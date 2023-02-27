#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - main
 * @s1: input one
 * @s2: input two
 * @n: number of bytes
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array = NULL;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n < j)
		j = n;
	array = malloc((i + j + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		array[k] = s1[k];
	i = k;
	for (k = 0; k < j; k++, i++)
		array[i] = s2[k];
	array[i] = '\0';
	return (array);
}

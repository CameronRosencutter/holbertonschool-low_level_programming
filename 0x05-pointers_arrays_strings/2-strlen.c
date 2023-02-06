#include "main.h"

/**
 * _strlen - length of string
 * @s: pointer to the character
 * Return: String length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

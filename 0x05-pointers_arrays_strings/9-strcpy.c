#include "main.h"
#include <stdio.h>

/**
 * _strcpy - hjk
 * @dest: pointer
 * @src: copy to desitnation
 * Return: a copy of src
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
	}
	return (dest);
}

#include "main.h"

/**
 * *_memcpy - Copy memory
 * @dest: 1
 * @src: 2
 * @n: int
 * Return: Char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

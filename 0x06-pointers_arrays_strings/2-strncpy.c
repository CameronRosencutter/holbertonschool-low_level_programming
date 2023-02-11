#include "main.h"

/**
 * _strncpy - concentrate strings
 * @dest: Destination
 * @src: Src String
 * @n: Int n
 * Return: Pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (src[s] != 0 && s < n)
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = 0;
		s++;
	}

	return (dest);
}

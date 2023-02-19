#include "main.h"

/**
 * *_memset - fill memory with bytes
 * @s: Char
 * @b: Char
 * @n: not chosen
 * Return: Final Char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

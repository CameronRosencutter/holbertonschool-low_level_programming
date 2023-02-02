#include "main.h"

/**
 * _isupper - Checks for upper case
 * @c: Char
 * Return: 0 if lower, 1 if upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

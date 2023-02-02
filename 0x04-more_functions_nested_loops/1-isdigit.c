#include "main.h"

/**
 * _isdigit - checks if digit or not
 * @c: character
 * Return: if digit (1), if not (0)
 */

int _isdigit(int c)

{
	if (c >= '0' &&  c <= '9')
		return (1);
	else
		return (0);
}

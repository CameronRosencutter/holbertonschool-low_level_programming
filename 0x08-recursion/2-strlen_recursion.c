#include "main.h"

/**
 * _strlen_recursion - Get string length
 * @s: char
 * Return: Length of String (*s)
 */

int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s)
	{
		num++;
		num += _strlen_recursion(s + 1);
	}

	return (num);
}

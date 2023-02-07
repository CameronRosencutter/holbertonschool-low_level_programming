#include "main.h"

/**
 * puts2 - prints every other char of string
 * *str: jkljkl
 * Return: (0)
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}

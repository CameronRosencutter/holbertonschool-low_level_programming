#include "main.h"

/**
 * print_rev - Reverse
 * Return: 0
 * @s: character
 */

void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}

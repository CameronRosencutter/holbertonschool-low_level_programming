#include "main.h"

/**
 * print_numbers - Print numbers 1
 * @c: char
 * Return: Always (0)
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

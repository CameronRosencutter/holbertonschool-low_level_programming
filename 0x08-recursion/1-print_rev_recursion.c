#include "main.h"

/**
 * _print_rev_recursion - print string in reverse.
 * @s: Character
 * Return: 0
 */

int main()
{
	char s[] = "Colton Walker";

	return (0);
}

void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	return (0);
}

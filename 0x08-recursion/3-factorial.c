#include "main.h"

/**
 * factorial - Gives the factorial of a number
 * @n: char
 * Return: -1 if n is lower than 0. return 0 otherewise.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
		return (n * factorial(n + 1));
}

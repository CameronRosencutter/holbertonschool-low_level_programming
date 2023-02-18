#include "main.h"

/**
 * check - see if sqrt is there
 * @a: int
 * @b: int
 *
 * Return: int
 */

int check(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (check(a + 1, b));
}


/**
 * _sqrt_recursion - find the sqrt
 * @n: intereger
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check(1, n));
}

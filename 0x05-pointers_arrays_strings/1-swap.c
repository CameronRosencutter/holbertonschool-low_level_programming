#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * Return: always 0
 * @a: a
 * @b: b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

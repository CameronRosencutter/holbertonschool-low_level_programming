#include "function_pointers.h"

/**
 * print_name - print name
 * @name: char string
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

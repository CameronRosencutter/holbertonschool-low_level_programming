#include <stdio.h>

/**
 * main - Display howmany arguments pass
 * @argc: total number of arguments
 * @argv: char pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (*argv[0] > 0)
		printf("%i\n", argc - 1);
	return (0);
}

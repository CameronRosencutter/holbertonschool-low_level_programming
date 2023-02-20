#include <stdio.h>

/**
 * main - Display howmany arguments pass
 * @argc: total number of arguments
 * @argv: char pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d/n", argc - 1);
	argv[0] = 0;
	return (0);
}

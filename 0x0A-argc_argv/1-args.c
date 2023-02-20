#include <stdio.h>

/**
 * main - Display howmany arguments pass
 * @argc: total number of arguments
 * @argv: char pointers
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}

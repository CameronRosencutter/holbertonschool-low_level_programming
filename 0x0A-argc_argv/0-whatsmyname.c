#include <stdio.h>

/**
 * main - display name
 * @argv: name of app
 * @argc: size of argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}

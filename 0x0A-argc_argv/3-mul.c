#include <stdio.h>
#include <stdlib.h>

/**
 * main - mult 2 numbers
 * @argc: argumetn Count
 * @argv: argument
 * Return: 0 succed, 1 failure
 */

int main(int argc, char *argv[])
{
	int a, b;

	a = b = 0;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[1]);
		printf("%d\n", a * b);
		return (0);
	}
	else
		printf("Error\n");
		return (1);
}

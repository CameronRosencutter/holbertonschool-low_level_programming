#include <stdio.h>

/**
 * main - Words go here
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'q' || c == 'e') != 1)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

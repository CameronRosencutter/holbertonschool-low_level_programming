#include <stdio.h>
#include "main.h"

/**
 * print_listint - prints elements
 * @h: elements
 * Return: number of elemento
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; ++i)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

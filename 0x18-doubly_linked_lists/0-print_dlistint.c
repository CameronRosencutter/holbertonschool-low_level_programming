#include "main.h"

/**
 * print_dlistint - prints all elements
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}

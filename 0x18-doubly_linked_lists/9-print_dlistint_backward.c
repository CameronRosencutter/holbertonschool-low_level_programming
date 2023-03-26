#include "main.h"

/**
 * print_dlistint_backward- prints all backwards
 * @h: head of list
 * Return: nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (!h)
		return (count);

	while (h->next)
	{
		h = h->next;
		count++;
	}
	count++;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->prev;
	}
	return (count);
}

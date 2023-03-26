#include "lists.h"

/**
 * dlistint_len - get len of dll
 * Return: len
 * @h: node
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

		while (h)
		{
			h = h->next;
			size++;
		}
	return (size);
}

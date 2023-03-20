#include <stdio.h>
#include "main.h"

/**
 * listint_len - prints elements
 * @h: elements of listint_t
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; ++i)
	{
		h = h->next;
	}
	return (i);
}

#include "lists.h"

/**
 * dlistint_len - get len of dll
 * Return: len
 * @h: node
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t numNodes = 0;

	while (temp)
	{
		numNodes++;
		temp = temp->next;
	}

	return (numNodes);
}

#include "main.h"

/**
 * add_nodeint_end - adds a new node
 * @head: head
 * @n: new element
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *prev = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (prev == NULL)
	{
		*head = new;
		return (new);
	}
	while (prev->next)
		prev = prev->next;
	prev->next = new;
	return (new);
}

#include "main.h"

/**
 * add_nodeint - adds a new node
 * @head: head of list
 * @n: int to add
 * Return: address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

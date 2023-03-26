#include "lists.h"

/**
 * delete_dnodeint_at_index- delete node
 * @head: head list
 * @index: index of node
 * Return: 1 succeed.
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *del;

	if (!head || !*head)
		return (-1);

	del = *head;
	for (i = 0; i != index; i++)
	{
		if (!del)
			return (-1);
		del = del->next;
	}

	if (del == *head)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		del->prev->next = del->next;
		if (del->next)
			del->next->prev = del->prev;
	}

	free(del);
	return (1);
}

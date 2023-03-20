#include "main.h"

/**
 * free_listint - frees list
 * @head: listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}

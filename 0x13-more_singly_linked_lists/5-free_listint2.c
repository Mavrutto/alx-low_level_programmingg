#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: var
 * @tempe: var
 */
void free_listint2(listint_t **head)
{
	listint_t *tempe;

	if (head == NULL)
		return;

	while (*head)
	{
		tempe = (*head)->next;
		free(*head);
		*head = tempe;
	}

	*head = NULL;
}

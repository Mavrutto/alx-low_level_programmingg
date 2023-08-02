#include "lists.h"

/**
 * pop_listint - del
 * @head: varia
 *
 * Return:number
 */
int pop_listint(listint_t **head)
{
	listint_t *tempe;
	int number;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = tempe;

	return (number);
}

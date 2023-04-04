#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to a head pointer of listint list
 *
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return;
	}

	while ((*head)->next)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}

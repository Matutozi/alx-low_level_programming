#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list*
 * @head: pointer to the header
 * Return: void
 *
*/

void free_listint(listint_t *head)
{
	listint_t *current = head;

	if (head == NULL)
	{
		return;
	}

	while (head->next)
	{
		current = head->next;
		free(head);
		head = current;
	}
	free(head);
}

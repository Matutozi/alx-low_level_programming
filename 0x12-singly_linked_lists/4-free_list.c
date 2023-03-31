#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *dup;

	while (head)
	{
		dup = head;
		head = head->next;
		free(dup->str);
		free(dup);
	}
}

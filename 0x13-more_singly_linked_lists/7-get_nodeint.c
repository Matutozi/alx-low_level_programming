#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a listint_t
 * @head: pointer to the head node
 * @index: parameter to index of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	i = 0;
	for (i = 0; i < index && current; i++)
	{
		current = current->next;
	}
	return (current);
}

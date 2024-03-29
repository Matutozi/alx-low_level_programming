#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end -  function that adds a new node at the end of  list
 * @head: pointer to the head
 * @n: parameter that stores the data
 * Return: returns the address of the new element
 *
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (new_node);
}

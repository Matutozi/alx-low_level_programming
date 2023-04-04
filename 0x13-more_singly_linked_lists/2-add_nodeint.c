#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

void print_list(const listint_t *head);
/**
 * add_nodeint - funcion adds new node to the beginning of an existing node
 * @head: stores double pointer to a head
 * @n: stores the data of new pointer
 * Return: returns address of new pointer or NULL if empty
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end -  function that adds a new node at the end of a listint_t list
 * @head: pointer to the head
 * @n: parameter that stores the data
 * Retunrn: returns the address of the new element
 *
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));


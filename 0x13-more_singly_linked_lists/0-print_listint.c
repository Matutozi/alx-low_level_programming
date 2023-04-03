#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements in a linked list
 * @h: parameter for the head pointer
 * Return: returns number of nodes
 *
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int count;

	ptr = h;
	count = 0;
	if (h == NULL)
	{
		printf("Error\n");
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count += 1;
	}
	return (count);
}

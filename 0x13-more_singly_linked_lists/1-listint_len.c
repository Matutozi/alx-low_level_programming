#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that returns the number if elements in a linked list
 * @h: parameter that stores the head pointer
 * Return: number of elements
 *
*/

size_t listint_len(const listint_t *h)
{
	const listint_t  *head = NULL;
	unsigned int count;

	count = 0;
	head = h;

	if (h == NULL)
	{
		printf("The node is Empty\n");
	}

	while (head != NULL)
	{
		count += 1;
		head = head->next;
	}
	return (count);

}

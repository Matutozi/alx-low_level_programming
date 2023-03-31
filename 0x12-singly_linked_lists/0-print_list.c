#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function that prints all elements of the list_t list
 * @h - parameter to consider
 * Description: use a loop to go through the list and print the values
 * Return: return the number of nodes
 *
*/

size_t print_list(const list_t *h)
{
	/* to count the number of nodes */
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}


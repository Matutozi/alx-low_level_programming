#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the numbers of elements in list
 * @h: parameter to consider
 * Return: the number of elements
 *
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

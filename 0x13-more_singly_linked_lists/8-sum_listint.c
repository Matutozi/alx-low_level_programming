#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: pointer ti the head node
 * Return: sum
 *
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

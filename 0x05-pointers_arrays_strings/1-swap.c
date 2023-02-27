#include "main.h"

/**
 * swap_int - to swap two integers
 *
 * @a: forst parameter to consider
 * @b: second parameter to consider
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

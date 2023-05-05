#include "main.h"

/**
 * clear_bit - function that sets the value of a bit it to 0 at a given index
 * @n: parameter that stores the number
 * @index: parameter that stores the index
 * Return: returns 1 if it worked, or -1 otherwise
 *
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;
	unsigned long int num = *n;

	if (index > 128)
		return (-1);

	value = ~(1 << index);
	*n = value & num;
	return (1);
}

#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: parameter that stores the number
 * @index: parameter that stores index
 * Return: returns 1 if it worked, or -1 otherwise
 *
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int result;
	unsigned long int num = *n;

	if (index > 128)
		return (-1);

	result = 1 << index;
	*n = result | num;
	return (1);
}

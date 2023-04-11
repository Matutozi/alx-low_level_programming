#include "main.h"

/**
 * set-bit - function that sets the value oof a bit to 1 at a given index
 * @n: pointer to the number setting the bit
 * @index: index of the bit to set
 * Return: return 1 if it worked and -1 if error occurred
 *
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}

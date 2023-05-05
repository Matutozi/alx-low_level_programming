#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: parameter that stores the number
 * @index: parameter that stores the index
 * Return: retunrns the value of bit
 *
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result;
	unsigned int bit;
	unsigned int i = 0;

	if (index > 128)
	{
		return (-1);
	}

	while (i <= index)
	{
		result = n >> 1;
		bit = n - (result << 1);
		n = result;
		i++;
	}
	return (bit);
}

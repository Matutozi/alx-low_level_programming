#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get
 *
 * Return: returns the value of the bit at index index or -1 if am error occurd
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}


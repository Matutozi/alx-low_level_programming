#include "main.h"

/**
 * binary_to_uint - "function that converts a binary number to an unsigned int"
 * @b: pointer to string
 *
 * Return: the converted number
 *
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i, j;

	if (!b)
	{
		return (0);
	}
	int i = 0;
	int number = 0;

	while (b[i])
	{
		j = b[i] - 48;
		if (j == 0 || j == 1)
		{
			number = (number << 1) + j;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}

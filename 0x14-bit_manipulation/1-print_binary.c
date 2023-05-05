#include "main.h"

/**
 * print_binary - function that prints binary representation of a number
 * @n: paraemeter that store the number;
 * Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int i;
	unsigned long int current;
	int bit_v;


	i = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (num != 0)
	{
		num = num >> 1;
		i++;
	}

	while (i > 0)
	{
		current = 1  << (i - 1);
		if ((n & current) != 0)
		{
			bit_v = 1;
		}
		else
		{
			bit_v = 0;
		}

		_putchar(bit_v + '0');

		i--;
	}
}

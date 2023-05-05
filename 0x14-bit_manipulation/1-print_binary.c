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
		num = n >> (i - 1);
		_putchar((num & 1) + '0');
		i--;
	}
}

#include "main.h"
/**
 * print_sign - to print the sign of a number
 * @n: to check the n
 * Return: Returns 1 and print
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	(
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
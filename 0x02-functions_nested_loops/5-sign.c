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
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	(
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

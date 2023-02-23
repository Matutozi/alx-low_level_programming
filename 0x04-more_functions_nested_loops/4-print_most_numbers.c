#include "main.h"

/**
 * print_most_numbers - to print all numbers except two and 4
*/

void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if (number != 50 || number != 52)
			_putchar(number);
	}
	_putchar('\n');

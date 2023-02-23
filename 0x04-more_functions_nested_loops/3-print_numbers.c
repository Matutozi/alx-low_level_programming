#include "main.h"

/**
 * print_numbers - to print the digits between (0-9)
*/

void print_numbers(void)
{
	int number;
	for (number = '0'; number < '10'; number++)
		_putchar(number);
	_putchar('\n');
}

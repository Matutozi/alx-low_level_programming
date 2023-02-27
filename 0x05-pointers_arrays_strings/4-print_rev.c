#include "main.h"

/**
 * print_rev - function to print a string in reverse
 *
 * @s: parameter to consider
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int counter = 0;
	int reverse;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	s--;

	for (reverse = counter; reverse > 0; reverse--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

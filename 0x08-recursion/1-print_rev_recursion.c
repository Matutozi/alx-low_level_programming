#include "main.h"

/**
 * _print_rev_recursion - to print a string in reverse order
 *
 * @s: parameter to consider
 *
 * Return: return type is void
 *
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

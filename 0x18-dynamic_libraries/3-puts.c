#include "main.h"
#include <stdio.h>

/**
 * _puts - write a function that prints a string
 *
 * @str: paramter to consider
 *
 * Return: 0;
 *
*/

void _puts(char *str)
{
	while (*str != '\0')
	{

		_putchar(*str++);
	}
	_putchar('\n');
}

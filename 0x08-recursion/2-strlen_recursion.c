#include "main.h"

/**
 * _strlen_recursion - to return the length of the string
 *
 * @s: parameter to consider
 *Return: returns an integer
*/

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}
	return (counter);
}

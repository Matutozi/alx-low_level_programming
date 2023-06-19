#include "main.h"

/**
 * _strlen - to print the length of a string
 *
 * @s: parameter to consider
 *
 * Return: return an int which is the lengthof the string
*/

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

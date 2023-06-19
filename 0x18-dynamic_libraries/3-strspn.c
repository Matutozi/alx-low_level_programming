#include "main.h"

/**
 * _strspn - functon that gets the length of a string
 * @s: first parameter
 * @accept: second parameter
 *
 * Return: returns the number of times it finds the element in a given string
 *
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter;
	int i;

	counter = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				counter++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (counter);
		}
		s++;
	}
	return (counter);
}

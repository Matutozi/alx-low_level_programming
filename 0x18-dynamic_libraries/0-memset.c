#include "main.h"

/**
 * *_memset - To fill memory with constant bytes
 * @s: first parameter to consider
 * @b: secod parameter
 * @n: third parameter to consider
 *
 * Return: returns a char
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

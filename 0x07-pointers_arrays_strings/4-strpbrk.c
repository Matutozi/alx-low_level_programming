#include "main.h"

/**
 * _strpbrk - to search through two strings for commin strings
 * @s: first parameter
 * @accept: second parameter to consider
 * Return: returns a pointer to a byte is s;
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; i <= accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	s++;
	}
	return ('\0');
}

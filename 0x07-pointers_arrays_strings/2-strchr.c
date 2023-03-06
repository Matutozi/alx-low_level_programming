#include "main.h"

/**
 * _strchr - write a function that locates a character in a string
 * @s: first parameter
 * @c: second parameter
 *
 * Return: returns a char
 *
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			i++;
			return (&s[i]);
		}
	}
	return (0);
}

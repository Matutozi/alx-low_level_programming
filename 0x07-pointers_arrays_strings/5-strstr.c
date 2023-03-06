#include "main.h"

/**
 * _strstr - to write a function that locates a substring
 * @haystack: first parameter to consider
 * @needle: second parameter to consider
 *
 * Return: returns a char
 *
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *p = needle;

		haystack++;
		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

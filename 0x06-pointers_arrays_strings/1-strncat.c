#include "main.h"

/**
 * _strncat - to concatenate two strings
 * @dest: parameter to consider
 * @src: second parameter to consider
 * @n: third parameter to consider
 * Return: Return a pointer to dest
 *
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

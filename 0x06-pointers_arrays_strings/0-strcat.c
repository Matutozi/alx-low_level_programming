#include "main.h"

/**
 * _strcat - to write a function that contatcenates two strings
 * @dest: parameter to consider
 * @src: second parameter to consider
 * Return: return a pointer to dest
 *
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

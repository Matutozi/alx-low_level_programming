#include "main.h"

/**
 * _strncpy - to copy a string
 * @dest: first paramater to consider
 * @src: second pparameter to consider
 * @n: third parameter to consider
 * Return: return a address to dest
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

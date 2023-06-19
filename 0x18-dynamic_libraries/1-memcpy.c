#include "main.h"

/**
 * _memcpy - to write a function that copies memory area
 * @dest:  first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: it returns a char
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}

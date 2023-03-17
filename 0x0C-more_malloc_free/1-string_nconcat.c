#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  function to join two strings together
 * s1: first string
 * @s2: second string
 * @n: third parameter
 * Return: pointer to a new string ("s1+s2+ \n")
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *new_string;
	unsigned int len1;
	unsigned int len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	i = 0;
	j = 0;
	if (n < len2)
		new_string = malloc(sizeof(char) * (len1 + n + 1));
	else
		new_string = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_string)
		return(NULL);
	while (i < len1)
	{
		new_string = *(s1 + i);
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		new_string[i++] = s2[j++];
	}
	while (n > len2 && i < (len1 + len2))
	{
		new_string[i++] = s2[j++];
	}
	new_string = '\0';
	return (new_string);
}



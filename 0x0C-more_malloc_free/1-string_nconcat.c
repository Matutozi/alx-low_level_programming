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
	int i;
	int j;
	char *new_string;

	new_string = malloc(strlen(s1) + strlen(s2) + 1);

	for (i = 0; i < strlen(s1); i++)
	{
		new_string = s1[i];
	}
	for (j = 0; j < strlen(s2); j++)
		new_string = s2[i];
	if (!new_string)
		return(NULL);




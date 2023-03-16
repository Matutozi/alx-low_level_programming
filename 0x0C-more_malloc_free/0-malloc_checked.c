#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - write a function that allocates memory using malloc
 * @b: first parameter
 * Description: write a function that allocates memory using malloc
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *var;

	var = malloc(sizeof(b));

	if (var == NULL)
	{
		exit(98);
	}
	return (var);
}

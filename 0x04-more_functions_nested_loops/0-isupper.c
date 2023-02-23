#include "main.h"

/**
 * _isupper - to check that a character is uppercase
 * @c: parameter to check
 * Return: return 1 if uppercase and 0 otherwise
*/

int _isupper(int c)
{
	int let;

	if (let >= 'A' && let <= 'Z')
		return (1);
	else
		return (0);
}

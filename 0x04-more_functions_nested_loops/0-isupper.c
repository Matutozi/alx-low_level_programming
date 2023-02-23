#include "main.h"

/**
 * _isupper - to check that a character is uppercase
 * @c: parameter to check
 * Return: return 1 if uppercase and 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

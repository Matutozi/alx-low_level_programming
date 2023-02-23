#include "main.h"
/**
 * _isupper - To check the input for uppercase
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

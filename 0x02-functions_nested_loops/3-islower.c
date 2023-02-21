#include "main.h"
/**
 *  _islower - to check for lowercase character
 *  @c: a character to be checked
 * Return: 1 when lowercase or 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

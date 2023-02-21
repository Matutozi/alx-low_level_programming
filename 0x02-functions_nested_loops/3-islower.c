#include "main.h"
/**
 *  _islower - to check for lowercase character
 * Return: 1 when lowercase or 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

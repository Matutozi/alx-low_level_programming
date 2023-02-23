#include "main.h"
/**
 * _isupper - To check the input for uppercase
 * @c: parameter to check
 * Return: return 1 if uppercase and 0 otherwise
*/
int _isupper(int c)
{
	char letter;

	if (letter >= 'A' && letter <= 'Z')
		return (1);
	else
		return (0);
}

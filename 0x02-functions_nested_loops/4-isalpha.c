#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: a character to be checked
 * Return: 1 if letter and 0 if not letter
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

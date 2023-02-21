#include "main.h"
/**
 * print_alphabet - to list all the alphabets in small letters
 * Return: return O when sucessful
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

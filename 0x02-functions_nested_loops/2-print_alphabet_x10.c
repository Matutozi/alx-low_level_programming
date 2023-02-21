#include "main.h"
/**
 * print_alphabet_x10 - to print all the alphabets 10 times
 * Return: 0 when successful
*/
void print_alphabet_x10(void)
{
	char letter;
	int count = 1;

	while (count < 11)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		count++;
		_putchar('\n');

	}
}

#include <stdio.h>
/**
 * main - to print all the numbers in base 16
 * Return: 0
*/
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}

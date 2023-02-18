#include <stdio.h.
/*.
 * main - print all the alphabet in reverse other
 *
 * Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	return (0);

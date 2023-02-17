#include <stdio.h>
/**
 * main - to print alphabets in capital and lower
 * Return: 0
*/
int main(void)
{
	char llr;

	for (llr = 'a'; llr <= 'z'; llr++)
	{
		putchar(llr);
	}
	for (llr = 'A'; llr <= 'Z'; llr++)
	{
		putchar(llr);
	}
	putchar('\n');
	return (0);
}

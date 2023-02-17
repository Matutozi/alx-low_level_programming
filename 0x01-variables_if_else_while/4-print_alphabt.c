#include <stdio.h>
/**
 * main - print all the alphabets except q and e
 * Return: 0
*/
int main(void)
{
	char llr;

	for (llr = 'a'; llr <= 'z'; llr++)
	{
		if (llr != 'e' && llr != 'q')
		{
			putchar(llr);
		}
	}
	putchar('\n');
	return (0);

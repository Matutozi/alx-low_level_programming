#include <stdio.h>
/**
 * main - TO print alll the alphabets in small letters
 * Return: 0
*/
int main(void)
{
	char lletter;

	for (lletter = 'a'; lletter <= 'z'; lletter++)
	{
		putchar(lletter);
	}
	putchar("\n");
	return (0);
}

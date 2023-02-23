#include "main.h"

/**
 * more_numbers - to print digits (1 through 14) ten times
*/

void more_numbers(void)
{
	int number;
	int counter;

	counter = 0;
	while (counter < 10)
	{
		for (number = 0; number < 15; number++)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			{
				_putchar(number % 10 + '0');
			}
		}
		counter++;
		_putchar('\n');
	}
}

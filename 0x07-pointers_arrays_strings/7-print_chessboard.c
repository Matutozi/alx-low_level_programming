#include "main.h"

/**
 * print_chessboard - to print a chess board
 * @a: parameter for an array
 * Return: alway return 0
 *
*/

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}


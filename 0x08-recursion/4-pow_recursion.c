#include "main.h"

/**
 * _pow_recursion - write a function that calculates the power x**y
 *
 * @x: first parameter
 * @y: second parameter
 *
 * Return: returns an int
 *
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

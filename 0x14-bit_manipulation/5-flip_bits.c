#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: parameter to n
 * @m: parameter to store number
 * Return: returns number of bits you would need to flip to get from one no
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int num = 0;

	while (xor)
	{
		num++;
		xor &= xor - 1;
	}
return (num);
}

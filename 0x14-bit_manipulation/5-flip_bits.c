#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: parameer that stores number
 * @m: parameter that number
 * Return: returns the number of bits you would needed
 *
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int i;

	i = 0;
	result = n ^ m;

	while (result)
	{
		i++;
		result &= result - 1;
	}
return (i);
}

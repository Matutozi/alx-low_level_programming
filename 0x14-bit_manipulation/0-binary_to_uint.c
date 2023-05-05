#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: parameter that stores the value
 * Return: returns the cnverted number when successful or 0 otherwise
 *
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;
	int num;

	if (b == NULL)
		return (0);
	i = 0;
	result = 0;
	while (b[i])
	{
		num = b[i] - 48; /* converts each charactr to integer */
		if (num == 0 || num == 1)
		{
			result = (result << 1) + num;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

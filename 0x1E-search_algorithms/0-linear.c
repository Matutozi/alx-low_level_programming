#include "search_algos.h"

/**
* linear_search - function that searches for value using the linear algorithm
* @array: pointer to first element of an array to search for
* @size: size of the array
* @value: stores the value to search for
* Return: return -1 when unsuccessful and value of index when successful
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);

		if (array[i] == value)
		{
			return (array[i]);
		}
	}
	return (-1);

}

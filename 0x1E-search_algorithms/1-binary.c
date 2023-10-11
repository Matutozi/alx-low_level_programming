#include "search_algos.h"

/**
 * binary_search - function that searches for values using binary search
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to search for
 * Return: returns value index, or -1 if not successful
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, l_index r_index;
	int mid;

	if (array == NULL)
		return (-1);

	l_index = 0;
	r_index = size - 1;

	while (l_index <= r_index)
	{
		printf("Searching in array: ");

		for (i = l_index; i <= r_index; i++)
		{
			printf("%d", array[i]);
			if (i != r_index)
				printf(", ");
			else
				printf("\n");
		}

		mid = (l_index + r_index) / 2;

		if (array[mid] > value)
			r_index = mid - 1;
		else if (array[mid] < value)
			l_index = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

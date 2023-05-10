#include "search_algos.h"

/**
 * binary_search - searches for a value 
 *
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 * Return: Success
 */

int binary_search(int *array, size_t size, int value)
{
	int lo, mi, hi;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	lo = 0;
	hi = size - 1;

	while (lo <= hi)
	{
		mi = (lo + hi) / 2;

		printf("Searching in array: ");
		for (x = lo; x <= hi; x++)
			printf("%i%s", array[x], x == hi ? "\n" : ", ");

		if (array[mi] < value)
			lo = mi + 1;
		else if (array[mi] > value)
			hi = mi - 1;
		else
			return (mi);
	}

	return (-1);
} 

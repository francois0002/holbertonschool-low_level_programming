#include <stdio.h>
#include <stdlib.h>

/**
* binary_search - searches algorithm
* Description: searches for a value in an array of integers
* using the Binary search algorithm
* @array: array of integers
* @size: size of array
* @value: value to search for
* Return:  0
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		middle = (left + right) / 2;

		if (array[middle] == value)
			return (middle);

		else if (array[middle] < value)
			left = middle + 1;

		else
			right = middle - 1;
	}

	return (-1);
}

#include "sort.h"

/**
 * swap - swaps two integers
 * @a: first int
 * @b: second int
 *
 * Return: Nothing
 */

void swap(int *a, int *b)
{
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
}

/**
 * selection_sort - a selection sort thst sorts array
 * @array: array to sort
 * @size: size of the array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	min_index = 0;

	if (size < 2)
		return;
	for (i = 0; i < (size - 1); i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_index] > array[j])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[min_index], &array[i]);
			print_array(array, size);
		}
	}
}

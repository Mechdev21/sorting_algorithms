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
 * bubble_sort - a bubble sort that sorts an array
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

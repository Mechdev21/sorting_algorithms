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

#include "sort.h"

/**
 * swap_it - swap integer
 * @c: integer
 * @d: integer
 */
void swap_it(int *c, int *d)
{
	int new;

	new = *c;
	*c = *d;
	*d = new;
}


/**
 * bubble_sort - sort a list
 * @array: array of list
 * @size: size of list
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size <= 0)
		return;
	for (i = 0; i < (size - i); i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_it(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

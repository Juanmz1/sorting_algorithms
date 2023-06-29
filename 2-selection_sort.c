#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array of the list
 * @size: size of the list
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_d;
	int temp;

	if (size <= 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_d = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[min_d])
				min_d = j;
		}
		if (min_d != i)
		{
			temp = array[i];
			array[i] = array[min_d];
			array[min_d] = temp;
			print_array(array, size);
		}
	}
}

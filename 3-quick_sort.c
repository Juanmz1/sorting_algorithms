#include "sort.h"

/**
 * partition - partition array
 * @array: array
 * @low: lowest
 * @high: highest
 * @size: array size
 * )
 * Return: int
 */
int partition(int *array, int low, int high, size_t size)
{
	int temp, pivot = array[high];
	int i, j;

	i = low - 1;
	for (j = low; j <= (high - 1); j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	i++;
	temp = array[i];
	array[i] = array[high];
	array[high] = temp;
	print_array(array, size);
	return (i);
}
/**
 * quick_sort_wrapper - sort
 * @array: array
 * @low: lowest
 * @high: highest
 * @size: size
 */
void quick_sort_wrapper(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		quick_sort(array, low, i - 1, size);
		quick_sort(array, i + 1, high, size);
	}
}
/**
 * quick_sort - sort with the quick sort algorithm
 * @array: array
 * @low: lowest
 * @high: highest
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	int i = 0, j = size - 1;
	(void)low, (void)high;

	if (size <= 0)
		return;
	quick_sort(array, i, j, size);
}

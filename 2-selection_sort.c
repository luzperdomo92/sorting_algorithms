#include "sort.h"

/**
 * selection_sort - selection_sort implementation
 * @array: array of int elements to sort
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_compare_index;
	int aux;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		min_compare_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_compare_index])
				min_compare_index = j;
		}
		if (min_compare_index != i)
		{
			aux =  array[i];
			array[i] = array[min_compare_index];
			array[min_compare_index] = aux;
			print_array(array, size);
		}

	}
}

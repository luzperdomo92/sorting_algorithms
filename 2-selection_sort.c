#include "sort.h"

/**
 * selection_sort - selection_sort implementation
 * @array: array of int elements to sort
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int aux;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				aux =  array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}

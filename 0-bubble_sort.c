#include "sort.h"

/**
 * bubble_sort - bubble sort implementation
 * @array: array of int elements to sort
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int ordered = 0;
	int aux;

	if (!array)
		return;

	while (ordered == 0)
	{
		ordered = 1;
		for (i = 0; i < size; i++)
		{
			if ((i + 1) < size)
			{
				if (array[i + 1] < array[i])
				{
					ordered = 0;
					aux =  array[i];
					array[i] = array[i + 1];
					array[i + 1] = aux;
					print_array(array, size);
				}
			}
		}
	}
}

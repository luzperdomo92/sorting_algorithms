#include "sort.h"

/**
 * swap - changes the value of two int pointers
 * @a: low range of the partiton
 * @b: high range of the partiton
 * Return: nothing
 */
void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - partitons of the array
 * @array: array of int elements to sort
 * @size: size of the array
 * @low: low range of the partiton
 * @high: high range of the partiton
 * Return: nothing
 */
int partition(int array[], size_t size, int low, int high) {
	int j, i, pivot;

	pivot = array[high];
	i = (low - 1);

	for (int j = low; j < high; j++) {
		if (array[j] <= pivot) {
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
			{
				print_array(array, size);
			}
		}
	}

	swap(&array[i + 1], &array[high]);
	if (i != j)
	{
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * recursive_quick_sort - quick_sort implementation using recursion
 * @array: array of int elements to sort
 * @size: size of the array
 * @low: low range of the partiton
 * @high: high range of the partiton
 * Return: nothing
 */
void recursive_quick_sort(int array[], size_t size, int low, int high) {
	int pivot;

	if (low < high) {
		pivot = partition(array, size, low, high);
		recursive_quick_sort(array, size, low, pivot - 1);
		recursive_quick_sort(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort - quick_sort implementation
 * @array: array of int elements to sort
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	recursive_quick_sort(array, size, 0, size - 1);
}

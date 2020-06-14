#include "sort.h"

/**
 * bubble_sort - bubble sort implementation
 * @array: array of int elements to sort
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int ordered = 0;
    int aux;

    if (!array)
		return;
    
    for (j = 0; j < size; j++)
    {
        for (i = 0; i < size; i++)
        {
            if((i + 1) < size && array[i + 1] < array[i])
            {
                aux =  array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
            }
        }
        print_array(array, size);
    }
}

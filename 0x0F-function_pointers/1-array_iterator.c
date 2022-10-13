#include <stdio.h>

/**
 * array_iterator - Executes a function for all
 * elements of an array.
 *
 * @array: The array with the elements.
 *
 * @size: The size of the array.
 *
 * @action: The function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - gets the index of an integer.
 *
 * @array: The array with the integers.
 *
 * @size: size of the array.
 *
 * @cmp: A pointer to the function that compares.
 * the integers.
 *
 * Return: returns the index of the integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	while (i < size)
	{
		if (size <= 0 || array[i] == size - 1)
			return (-1);

		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (i);
}

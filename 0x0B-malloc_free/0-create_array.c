#include <stdlib.h>

/**
 * create_array - creates an array.
 *
 * @size: size if the array.
 *
 * @c: The character to be in the array.
 *
 * Return: returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	array = (char *)malloc(sizeof(char) * size);
	if ((int)size == 0)                                       return (NULL);

	for (i = 0; i < (int)size; i++)
	{
		array[i] = c;

		if (array[i] != c)
			return (NULL);
	}
	return (array);
	free(array);
}

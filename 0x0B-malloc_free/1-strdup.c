#include <stdlib.h>

/**
 * _strdup - stores a duplicate string.
 *
 * @str: The string to be copied.
 *
 * Return: returns a pointer to new mem space.
 */
char *_strdup(char *str)
{
	int i;
	char *copy;

	if (str == NULL)
		return (NULL);

	copy = malloc(sizeof(str) * 2);

	if (sizeof(copy) < sizeof(str))
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
	free(copy);
}

#include "main.h"

/**
 * _strlen - checks the length of a string.
 *
 * @s: The string whose length is ti be checked.
 *
 * Return: returns the length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);

}

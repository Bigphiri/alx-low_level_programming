#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: The string.
 *
 * Return: returns the length of the string.
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	else if (*s != '\0')
		len = 1;

	return (len + _strlen_recursion(s + 1));
}

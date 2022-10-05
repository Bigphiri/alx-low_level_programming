#include "main.h"
#include <stddef.h>
/**
 * _strchr -  Check for the first occurence of a given character in a string.
 *
 * @s: The string.
 *
 * @c: The character to be checked for.
 *
 * Return: returns a pointer to the occurence of the character in the string.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c)
	{
		s++;
		i++;
	}

	if (s[i] ==  c)
	{
		s++;
		return (s);
	}
	else
	{
		return (NULL);
	}

}


#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the
 *
 * @s: The string with the characters to be checked against.
 *
 * @accept: The string with the characters to be checked for in s.
 *
 * Return: Returns a pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
			else if (accept[i + 1] == '\0')
				return (NULL);
		}
		s++;
	}
	return (s);
}

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string to be checked for characters.
 *
 * @accept: The string with the characters to be checked for.
 *
 * Return: returns the number of characters from accept present in s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count;

	i = 0;
	count = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}

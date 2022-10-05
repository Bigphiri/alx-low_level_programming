#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes in the string accept.
 *
 * @s: The string with the characters to be checked against.
 * 
 * @accept: The string with the characters to be checked for in s.
 * 
 * Return: Returns a pointer to the byte in s that matches one of the bytes in accept,
 or NULL if no such byte is found.
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
				break;
			}
			else if (accept[i + 1] == '\0')
				return (NULL);
		}
		s++;
	}
	return (s);
}

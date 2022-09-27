#include "main.h"

/**
 * memset - set a character to given bytes of memory.
 *
 * @s: Pointer to the memory location.
 *
 * @b: The character to be set.
 *
 * @n: The number of bytes to be set.
 *
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}
	return (s);
}

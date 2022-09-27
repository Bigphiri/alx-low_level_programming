#include "main.h"

/**
 * _memcpy - copies a given number of bytes from source to destination.
 *
 * @dest: The destination to be copied to.
 *
 * @src: Thes source with elements to be copied.
 *
 * @n: The number of bytes to be copied.
 *
 * Return: It returns a pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int c;

	i = 0;
	while (src[i] < (int)n)
	{
		c = 0;
		while (c < (int)n)
		{
			dest[c] = src[i];
			i++;
			c++;
		}
	}
	return (dest);
}

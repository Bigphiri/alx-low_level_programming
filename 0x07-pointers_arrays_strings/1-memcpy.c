#include "main.h"

/**
 * _memcpy - copies n bytes from source to destination.
 * @dest: the destination memory location.
 *
 * @src: The source memory location.
 *
 * @n: The number of bytes to be copied.
 *
 * Return: returns a poibter to the destination location.
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	int i;

	for (i = 0; i <= (int)n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}

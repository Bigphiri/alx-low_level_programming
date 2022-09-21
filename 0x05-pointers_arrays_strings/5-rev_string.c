#include "main.h"
/**
 * rev_string - reverses a string.
 *
 * @s: The string to be reversed.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}


include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_to_98 - prints natural numbera ul to 98.
 *
 * @n - the starting point.
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while(n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while(n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}

#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *i
 * @a: pointer to value a.
 *
 * @b: pointer to value b.
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}

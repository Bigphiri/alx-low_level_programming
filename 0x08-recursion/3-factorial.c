#include "main.h"

/**
 * factorial -calculatez the factorial of a given number.
 *
 * @n: The number.
 *
 * Return: it returns the factorial of the number.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n >= 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}

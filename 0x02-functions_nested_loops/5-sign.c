#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: The number whose sign gets printed.
 *
 * Return: returns the sign of the number.
 */
int print_sign(int n)
{
	int sign;

	if ((n > 0))
	{
		sign = _putchar('+');
	}
	else if ((n == 0))
	{
		sign = _putchar('0');
	}
	else
	{
		sign = _putchar('-');
	}
	return (sign);
}

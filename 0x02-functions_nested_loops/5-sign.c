#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: The number to be checked
 *
 * Return: returns the sign if the number.
 */
int print_sign(int n)
{
	int sign;
	int i;

	i = n;

	if ((i > '1'))
	{
		sign = _putchar('+');
	}
	else if ((i == '0'))
	{
		sign = _putchar('0');
	}
	else
	{
		sign = _putchar('-');
	}
	_putchar('\n');
	return (sign);
}

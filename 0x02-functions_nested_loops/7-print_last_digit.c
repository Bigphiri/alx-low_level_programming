#include "main.h"

/**
 * print_last_digit - gives the last digit of a number.
 *
 * @i: The number.
 *
 * Return: returns the last digit.
 */
int print_last_digit(int n)
{
	int i;
	
	i = n % 10;

	_putchar(i);

	return (i);
}


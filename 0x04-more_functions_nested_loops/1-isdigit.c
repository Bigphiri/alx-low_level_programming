#include "main.h"

/**
 * _isdigit - Check for a digit.
 *
 * @c: The variable to be checked.
 *
 * Return: Always 1 for a digit and 0 for otherwise.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

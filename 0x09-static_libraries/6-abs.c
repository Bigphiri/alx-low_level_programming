#include "main.h"

/**
 * _abs - Gives the absolute value of an integer.
 *
 * @i: The integer with the absolute value to be found.
 *
 * Return: It returns the absolute value.
 */
int _abs(int i)
{
	int a;

	if (i >= 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return ('0');
	}
	else
	{
		a = -1 * i;
		return (a);
	}
}

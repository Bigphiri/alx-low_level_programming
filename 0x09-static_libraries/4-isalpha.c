#include "main.h"
/**
 * _isalpha - checks for alphabetical charactes
 *
 * @c: the character to be checked
 *
 * Return: 1 for alphabetical characters, 0 otherwise
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

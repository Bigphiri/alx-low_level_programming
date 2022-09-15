#include "main.h"
/**
 * Print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */

void Print_alphabet_x10(void)
{
	int letr1;
	int letr2;

	for (letr1 = 0; letr1 <= 9; letr1++)
	{
		for (letr2 = 'a'; letr2 <= 'z'; letr2++)
		{
			_putchar(letr2);
		}

		_putchar('\n');

	}
}

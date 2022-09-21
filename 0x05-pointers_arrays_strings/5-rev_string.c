#include "main.h"
/**
 * rev_string - reverses a string.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int i, j, tempo;

	i = 0;
	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (j > 1)
	{
		tempo = s[j];
		s[j--] = s[i];
		s[i++] = tempo;
	}
}

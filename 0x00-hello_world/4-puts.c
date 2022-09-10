#include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (Succes)
 *
 * gets - reads a string
 *
 * puts - prints a string
 */
int main(void)
{
	char my_string[60];

	scanf("%[^\n]s", my_string);

	puts(my_string);
	return (0);
}

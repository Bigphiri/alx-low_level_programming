#include<stdio.h>

/**
 * main - prints the name of the file.
 *
 * @argc: The number of arguments.
 *
 * @argv: an array of pointers to the actual arguments.
 *
 * Return: Always 0.
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

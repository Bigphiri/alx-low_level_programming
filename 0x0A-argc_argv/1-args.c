#include<stdio.h>

/**
 * main - prints the number of arguments passed.
 *
 * @argc: The number of arguments passed to a program.
 *
 * @argv: A pointer to an array of strings, which are the actual arguments.
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}

#include <stdio.h>

/**
 * main - print out every argument passed when executing the program.
 *
 * @argc: The number of arguments passed.
 *
 * @argv: an array containing pointers to strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}

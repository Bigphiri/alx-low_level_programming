#include<stdio.h>

/**
 * main - prints the result of multiplication of two numbers.
 *
 * @argc: the number of arguments passed.
 *
 * @argv: the actual arguments.
 *
 * Return: always (0).
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc >= 3)
	{
		res = (*argv[1] - '0') * (*argv[2] - '0');
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

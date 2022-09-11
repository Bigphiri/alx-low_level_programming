#include <stdio.h>

/**
 * main - Entry point
 *
 * printf - Dispays output
 *
 * sizeof - Gives the size of a datatype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	float floatType;
	long longType;
	long long longlongType;

	/*prints the sizes of the data types*/
	printf("size of a char: %zu byte(s)\n", sizeof(charType));
	printf("size of an int: %zu byte(s)\n", sizeof(intType));
	printf("size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("size of a long long: %zu byte(s)\n", sizeof(longlongType));
	printf("size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}

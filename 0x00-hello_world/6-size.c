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
	
	/*prints the sizes of the data types*/
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long));
	printf("size of a long long int: %zu byte(s)\n", sizeof(longlong));
	printf("size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}

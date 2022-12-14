#include <stdio.h>

/**
 * print_name - prints a name.
 *
 * @name: The name to be printed.
 *
 * @f: The print function.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#include <stdarg.h>
#include <stddef.h>

/**
 * sum_them_all - sums up all the parameters of a
 * function.
 *
 * @n: The first parammeter.
 *
 * Return: returns the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < (int)n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (sum);
}

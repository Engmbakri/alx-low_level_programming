#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums variable arguments
 * @n: number of arguments
 * @...: integers to sun
 * Return: integer sum
*/

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0, i = n;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);

	while (i--)
	{
		sum += av_arg(args, int);
	}
	va_end(args);
	return (sum);
}

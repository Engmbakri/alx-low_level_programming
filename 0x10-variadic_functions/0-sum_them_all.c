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
	if (!n)
	{
		return (0);
	}

	int sum = 0, i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}

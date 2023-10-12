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
	if (n == 0)
	{
		return (0);
	}

	int sum = 0;
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0 ; i < n ; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}

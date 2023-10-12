#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator:  string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the integers to print
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int  i = 0;

	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && separator != NULL)
			ptintf("%s", separator);
	}
	print("\n");
	va_end(args);
}

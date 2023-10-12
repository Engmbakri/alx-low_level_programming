#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *sepa = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(args, double));
					break;
				case 's':
					st = va_arg(args, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sepa, st);
					break;
				default:
					i++;
					continue;
			}
			sepa = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}

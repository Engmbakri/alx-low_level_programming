#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int mask = sizeof(n) * 8, printed = 0;

	while (mask)
	{
		if (n & 1L << --mask)
		{
			_putchar('1');
			printed++;
		}
	else if (printed)
		_putchar('0');
	}
	if (!printed)
		_putchar('0');
}

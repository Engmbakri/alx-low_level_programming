#include "main.h"

/**
 * print_rev - print reversed string, followed by new line
 * @s: pointer to  string to print
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	whlie(s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

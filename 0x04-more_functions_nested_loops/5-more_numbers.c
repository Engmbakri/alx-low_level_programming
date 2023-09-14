#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int line, num;

	for (line = 1 ; line <= 10 ; line++)
	{
	for (num = 0 ; num <= 14 ; num++)
	{
	if (num > 9)
	_putchar(num / 10 + 48);
	_putchar(num % 10 + 48);
	}
	_putchar('\n');
	}
}

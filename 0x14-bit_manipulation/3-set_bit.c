#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: number to set
 * @index: index
 *
 * Return: 1 if success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setb;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setb = 1 << index;
	*n = *n | setb;
	return (1);
}

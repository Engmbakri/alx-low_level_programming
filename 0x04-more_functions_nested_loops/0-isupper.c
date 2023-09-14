#include "main.h"

/**
 * _isupper - function checks if c id uppercase
 *
 * @c: input alphabet for function
 *
 * Return: 1 if its upper, 0 it its not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

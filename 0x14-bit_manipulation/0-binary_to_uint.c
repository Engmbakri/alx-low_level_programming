#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of binary numbers
 * Return:  the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b++ - '0');
	}
	return (result);
}

#include "main.h"

/**
 * malloc_checked -  function that allocates memory
 * @b: unsigned integer
 * Return: pointer to arry or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}

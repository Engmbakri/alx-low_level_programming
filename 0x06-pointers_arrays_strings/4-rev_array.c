#include "main.h"
/**
 * reverse_array - function that reverses the
 *                 content of an array of integers
 * @a: array
 * @n: number of elements of the array
 *
 * Return: Void
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = n ; i >= 0 ; i--)
	{
		printf("%d", a[i]);
	}
}

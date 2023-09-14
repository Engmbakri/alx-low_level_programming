#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int row, colum;

	for (row = 1 ; row <= size ; row++)
	{
		for (colum = 1 ; colum <= size ; colum++)
		{
			if ((row + colum) <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

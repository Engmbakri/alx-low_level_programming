#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent
 * Return: void
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}
	unsigned long int bit = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int Zeros = 1;

	while (bit > 0)
	{
		if ((n & bit) != 0)
		{
			Zeros = 0;
			printf("1");
		}
		else if (!Zeros)
		{
			printf("0");
		}
		bit >>= 1;
	}
}

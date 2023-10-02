#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line
 * @argv: pointer to array of command line argumemt
 * Return: 0-success, non-zero-fail.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

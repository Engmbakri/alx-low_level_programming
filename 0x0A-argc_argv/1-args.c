#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command l command line argument
 * @argv: po-success, non-zer0-fail
 * Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
}

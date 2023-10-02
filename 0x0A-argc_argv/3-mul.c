#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: number of command line
 * @argv: pointer to array of command line
 * Return: 0-success, non-zero-fail
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mmul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

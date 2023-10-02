#include < stdio.h>
#include < stdlib.h>

/**
 * main - the entry point of the program
 * @argc: the number of command-line
 * @argv: array of strings containing the command-line
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc] ; *c ; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	 }
	printf("%d\n", sum);
	return (0);
}

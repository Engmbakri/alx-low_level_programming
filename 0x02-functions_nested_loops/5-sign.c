#include "main.h"

/**
 * print_sign - prints the sign of n
 *@n: takes integar type input for function
 * Return: return 1 if +, 0 if 0 and -1 if -
*/

int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);
}
else
{
putchar(45);
return (-1);
}
}

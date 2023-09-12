#include "main.h"

/**
 * main - Entry point
 * Discription: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char st[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ch++)
putchar(st[ch]);
putchar('\n');
return (0);
}

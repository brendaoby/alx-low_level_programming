#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints a hexadecimal string
 * Return: Always 0 (Success)
 */
int main (void)
{
int b;
char c;

for (b = '48'; b < '58'; b++)
{
	putchar(b);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combos of 0 t0 9
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i <= 9; ++i)
{
putchar('0' + i);

if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

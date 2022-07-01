#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints possible combos of two numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens;
int ones;

for (tens = 48; tens <= 56; tens++)
{
for (ones = 49; ones <= 57; ones++)
{
if (ones > tens)
{
putchar(tens);
putchar(ones);
if (tens != 56 || ones != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prionts 0 to 9 on a single line
 * Return: Always 0 (Success)
 */
int main(void)
{
int q;

for (q = '0'; q <= '9'; ++q)
putchar(q);

putchar('\n');

return (0);
}

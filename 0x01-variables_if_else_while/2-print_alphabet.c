#include <stdio.h>

/**
 * main - Entry point
 * Description - Displays lowercase alphabets
 * Return - Always 0 (Success)
 */
int main(void)
{
char b;

for (b = 'a'; b <= 'z'; b++)
putchar(b);
putchar('\n');
return (0);
}

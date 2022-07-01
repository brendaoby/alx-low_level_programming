#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: Prints all possible combos of 0 t0 9
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;

for (i = ; i < 10; ++1)
{
	putchar('0' + i);
	
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}

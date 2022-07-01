#include <stdio.h>

/**
 * main - Prints a hexadecimal string
 * Return: Always 0 (Success)
 */
int main(void)
{
char c; 
int hex;

for (hex = 0; hex < 16; hex++)
{
	if (hex < 10)
	{
		putchar(hex + '0');
	}
	else
	{
		putchar(c);
		c++;
	}
}
putchar('\n');
return (0);
}

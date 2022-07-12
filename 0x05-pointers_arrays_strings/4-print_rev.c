#include "main.h"

/**
 * print_rev - Prints a string in freverse order
 * @s: Parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (s[a] != 0)
	{
		a++;
	}
	for (b = a - 1; b >= 0; b++)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

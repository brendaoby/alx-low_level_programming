#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: Parameter
 * Return: 0
 */

void print_line(int n)
{
	int b = 1;

	while (b <= n)
	{
		_putchar(95);
		b++;
	}
	_putchar('\n');
}

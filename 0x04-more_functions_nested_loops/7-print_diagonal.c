#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int b = 1;

	while (b <= n)
	{
		_putchar(92);
		b++;
	}
	_putchar('\n');
}

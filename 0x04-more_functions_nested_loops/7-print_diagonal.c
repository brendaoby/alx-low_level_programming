#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int b = 0;

	int c;

	if (n > 0)
	{
		for (; b < n; b++)
		{
			for (c = 0; c < b; c++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

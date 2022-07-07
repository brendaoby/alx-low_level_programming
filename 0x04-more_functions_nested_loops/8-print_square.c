#include "main.h"

/**
 * print_square - Prints a square
 * @size: Parameter
 * Return: 0
 */

void print_square(int size)
{
	int b = 0;

	int q;

	if (size > 0)
	{
		for (; b < size; b++)
		{
			for (q = 0; q < size; q++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

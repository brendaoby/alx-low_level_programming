#include <unistd.h>
#include "main.h"

/**
 * times_table - Entry point
 * Deascription: Prints the 9 times table
 * Return: 0
 */

void times_table(void)
{
	int b;
	int d;
	int e;

	for (b = 0; b <= 9; b++)
	{
		for (d = 0; d <= 9; d++)
		{
			e = b * d;
			if ((e / 10) == 0)
			{
				if (d == 0)
				{
					_putchar('0');
				}
				if (d != 0)
				{
					_putchar(' ');
					_putchar((e % 10) + '0');
				}
				if (d < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
				if (d < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}

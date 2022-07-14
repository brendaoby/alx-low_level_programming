#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Parameter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int t, f, count;

	if (n < 0)
	{
		_putchar(45);
		t = d * -1;
	}
	else
	{
		t = n;
	}

	f = t;
	count = 1;

	while (f > 9)
	{
		f /= 10;
		count *= 10;
	}
	for  (; count >= 1; count /= 10)
	{
		_putchar(((t / count) % 10) + 48);
	}
}

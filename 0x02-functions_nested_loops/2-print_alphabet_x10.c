#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Prints lowercase alphabets 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int q;
	char b;

	for (q = 0; q < 10; q++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(q);
		}
		_putchar('\n');
	}
}

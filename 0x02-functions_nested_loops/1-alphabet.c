#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Entry Point
 * Description: Prints lowercase alphabets
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

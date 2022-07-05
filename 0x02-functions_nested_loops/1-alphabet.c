#include <unistd.h>
#include "main.h"

/**
 * main - Entry Point
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

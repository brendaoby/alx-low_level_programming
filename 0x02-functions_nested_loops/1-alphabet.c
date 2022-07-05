#include <unistd.h>
#include "main.h"

/**
 * main - Entry Point
 * Description: Prints lowercase alphabets
 * Return: 0
 */
void print_alphabet(void)
{
	char f;
	f = 'a';

	while (f <= 'z')
	{
		_putchar(f);
		f++;
	}
	_putchar('\n');
}

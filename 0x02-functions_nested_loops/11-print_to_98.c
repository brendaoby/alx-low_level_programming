#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description: Prints natural numbers till 98
 * @n: Value to be checked
 *
 * Return: 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}

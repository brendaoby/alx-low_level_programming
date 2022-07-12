#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints an array of n integers
 * @a: Value
 * @n: Value
 * Return: 0
 */

void print_array(int *a, int n)
{
	int w = 0;

	for (; w < n; w++)
	{
		printf("%d", *(a + w));
	}
	if (w != (n - 1))
	{
		printf(", ")
	}
	printf("\n")
}

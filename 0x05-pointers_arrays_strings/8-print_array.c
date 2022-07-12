#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @a: Value
 * @n: Value
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}

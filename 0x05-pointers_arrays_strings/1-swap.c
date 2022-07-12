#include "main.h"

/**
 * swap_int - Swap integers, a and b
 * @a: Value to be swapped
 * @b: Value to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

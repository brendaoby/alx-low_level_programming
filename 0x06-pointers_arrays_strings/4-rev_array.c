#inlude "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer
 * @n: Parameter
 * Return: 0
 */

void reverse_array(int *a, int n);
{
	int *startb, *endb, b;
	int x;

	startb = a;
	endb = a;

	for (x = 0; x < n - 1; x++)
	{
		endb++;
	}

	for (x = 0; x < n / 2; x++)
	{
		b = *endb;
		*endb = *startb;
		*startb = b;
		startb++;
		endb--;
	}
}

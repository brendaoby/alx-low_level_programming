#inlude "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer
 * @n: Parameter
 * Return: 0
 */

void reverse_array(int *a, int n);
{
	int *start_c, *end_c, c;
	int x;

	start_c = a;
	end_c = a;

	for (x = 0; x < n - 1; x++)
	{
		end_c++;
	}

	for (x = 0; x < n / 2; x++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;
		start_c++;
		end_c--;
	}
}

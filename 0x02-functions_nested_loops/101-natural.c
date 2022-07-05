#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int b = 0;
	int sum = 0;

	while (b < 1024)
	{
		if (b % 3 == 0 || b % 5 == 0)
		{
			sum += b;
		}
		b++;
	}
	printf("%i\n", sum);
	return (0)
}

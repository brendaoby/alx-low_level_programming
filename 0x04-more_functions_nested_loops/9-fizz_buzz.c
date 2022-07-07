#include <stdio.h>

/**
 * main - Prints 1 to 100 with a dash of FizzBuzz
 * Return: 0
 */

int main(void)
{
	int w;

	for (w = 1; w < 100; w++)
	{
		if (w % 3 == 0 && w % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (w % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (w % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", w);
		}
	}
	printf("Buzz\n");
	return (0);
}

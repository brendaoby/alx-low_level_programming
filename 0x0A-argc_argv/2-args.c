#include <stdio.h>

/**
 * main - Prints arguments
 * @argc: Counts arguments
 * @argv: Argument array
 */

int main (int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%d\n", argv[i]);
			i++;
		}
	}
	return (0);
}

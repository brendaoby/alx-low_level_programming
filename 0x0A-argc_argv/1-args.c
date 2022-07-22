#include <stdio.h>
#include "main.h"

/**
 * main -Counts arguments
 * @argc: Counts arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc -1);

	return (0);
}

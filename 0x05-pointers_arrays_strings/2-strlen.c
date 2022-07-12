#include "main.h"

/**
 * _strlen - Prints the length of string
 * @s: Parameter
 * Return: String length
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer
 * @s2: Pointer
 * Return: s1-s2
 */

int _strcmp(char *s1, char *s2)
{
	char *a = s1;
	char *b = s2;

	while (*a != '\0' && *b != '\0' && *a == *b)
	{
		*a++;
		*b++;
	}
	return (*a - *b);
}

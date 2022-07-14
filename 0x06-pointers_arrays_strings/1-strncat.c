#include "main.h"

/**
 * *_strncat - Concatenates two strings to the nth character
 * @dest: Pointer to parameter
 * @src: Pointer to parameter
 * @n: Parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;

	while (src[y] !- '\0' && y < n)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return 0;
}

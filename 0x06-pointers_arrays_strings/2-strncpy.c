#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: Pointer to parameter
 * @src: Pointer to parameter
 * @n: Parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int w;

	w = 0;

	while (src[w] != '\0' && w < n)
	{
		dest[w] = src[w];
		w++;
	}
	dest[w] = '\0';
	return (dest);
}

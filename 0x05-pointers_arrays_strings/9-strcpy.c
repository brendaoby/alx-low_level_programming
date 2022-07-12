#include "main.h"

/**
 * _strcpy - Copies Strings
 * @dest: Pointer
 * @src: Pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src);
{
	int w;

	for (w = 0; *(src + w) != '\0'; w++)
	{
		dest[w] = *(src + w);
	}
	dest[w] ='\0';

	return (dest);
}

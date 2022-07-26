#include "main.h"

/**
 * *create_array - Creates array
 * @size: Number of elements in array
 * @c: char
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	while (position < size)
	{
		*(buffer + position) = c;
		position++;
	}
	return (buffer);
}

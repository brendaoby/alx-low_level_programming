#include "main.h"

/**
 * *create_array - Creates an array
 * @size: Number of elements
 * @c: Parameter
 * Return: A pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		buffer[index] = c;
	}
	return (buffer);
}

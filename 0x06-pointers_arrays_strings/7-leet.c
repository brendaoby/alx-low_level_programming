#include "main.h"

/**
 * leet -Encodes a string to 1337
 * @s: String
 * Return: String
 */

char *leet(char *s)
{
	int count = 0;
	int i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (s[count] != '\0')
	{
		for (i = 0; i < 4; i++)
		{
			if (s[count] == lower[i] || s[count] == upper[i])
			{
				s[count] = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}

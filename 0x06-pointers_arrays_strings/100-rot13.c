#include "main.h"

/**
 * *rot13 - Encodes a string with rot13
 * @s: String
 * Return: Encoded string
 */

char *rot13(char *s)
{
	int count = 0;
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char rot13[] = "nopqrstuvwxyzABCDEFGHIJKLM";

	while (s[count] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == alpha[i])
			{
				s[count] = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}

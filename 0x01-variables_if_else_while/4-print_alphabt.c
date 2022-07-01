#include <stdio.h>

/**
 * main - Displays lowercase alphabets except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;
	
	for (b = 'a'; b <= 'z'; ++b)
	{
		if (b != 'e' && c != 'q')
			putchar(b);
	}

	putchar('\n');
	
	return (0);
}

#include "main.h"

/**
 * _isupper - Checks for Uppercase Letter
 * @c: Value to be checked
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

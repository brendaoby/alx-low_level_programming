#include <unistd.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * Description: Checks for alphabetic character
 * @c: Contains value to be compared
 * Return: 1 if c is a lowercase or uppercase letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

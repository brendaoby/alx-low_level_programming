#include <unistd.h>
#include "main.h"

/**
 * _abs - Entry point
 * Descrition: Compute's an integer's absolute value
 * Return: 0
 */

int _abs(int b)
{
	if (b < 0)
	{
		return (b * (-1));
	}
	else if (b == 0)
	{
		return (0);
	}
	else
	{
		return (b);
	}
}

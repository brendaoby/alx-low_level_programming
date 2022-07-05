#include <unistd.h>
#include "main.h"

/**
 * print_sign - Entry point
 * Description: Prints + if n is greater than 0, 0 if n is 0 and - otherwise
 * @n: Value to be checked
 * Return: 1 if +, 0 if 0 and -1 if -
 */

int print_sign(int n)
{
	int sgn_tst;
	if (n > 0)
	{
		sgn_tst = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sgn_tst = 0;
		_putchar('0');
	}
	else
	{
		sgn_tst = -1;
		_putchar('-');
	}
	return (sgn_tst);
}

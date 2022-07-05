#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Entry Point
 * Description: Prnts the last digit of a number
 * @b: Value to be checked
 * Return: value of last digit
 */

int print_last_digit(int b)
{
	int lst_dg;

	if (b < 0)
	{
		lst_dg = (-1 * (b % 10));
		_putchar(lst_dg + '0');
		return (lst_dg);
	}
	else
	{
		lst_dg = (b % 10);
		_putchar(lst_dg + '0');
		return (lst_dg);
	}
}

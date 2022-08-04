#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: List of types of arguments passed
 * to the function
 * Return: 0 (Success)
 */

void print_all(const char * const format, ...)
{
	va_list list;

	unsigned int i = 0, j, k = 0;

	char *strg;

	const char t_arg[] = "cifs";

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), k = 1;
				break;
			case 's':
				strg = va_arg(list, char *), k = 1;

				if (!strg)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strg);
				break;
		}
		i++;
	}
	printf("\n");
       va_end(list);
}

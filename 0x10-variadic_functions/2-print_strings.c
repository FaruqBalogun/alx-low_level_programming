#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>


/**
 * print_strings - Prints the string
 * @separator: The string to be printed
 * @n: Number of string passed
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", str == NULL ? 'nil' : str);

		if (separator == NULL)
			continue;
		else
		{
			if (i == n - 1)
				break;
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}

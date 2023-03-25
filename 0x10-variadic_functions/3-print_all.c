#include "variadic_functions.h"
#include <stdio.h>
#include  <stdarg.h>

/**
 * print_all - Prints all parameter passed
 * @char *: The char pointer to space
 * @format: The argument passed
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *space = " ";
	char *st;

	va_start(ap, format);
	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", space, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", space, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", space, va_arg(ap, double));
				break;
			case 's':
				st = va_arg(ap, char *);
				if (st == NULL)
					printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		space = ", ";
		i++;
	}
	}
	printf("\n");
	va_end(ap);
}

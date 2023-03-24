#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds all the parameter
 * @n: The total number of Parameters passed
 * @...: The Parameters
 * Return: total
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, total = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(list, int);
	}
	va_end(list);
	return (total);
}

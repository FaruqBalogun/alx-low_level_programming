#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: The number of terms
 * Return: n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

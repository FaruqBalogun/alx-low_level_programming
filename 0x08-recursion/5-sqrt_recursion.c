#include "main.h"
#include <stdio.h>

/**
 * number - helps find the square root of a natural number
 * @n: natural number starting from 1
 * @root: Square root to be found
 * Return: square root of answer
 * if root is not a natural squre root returns -1
 * if root is less than 0 returns -1
 */
int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

/**
 *  _sqrt_recursion - Returns the square root of a number
 *  @n: The number to find the square root
 *  Return: Square root
 *  if n does not hvae a square root then return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}

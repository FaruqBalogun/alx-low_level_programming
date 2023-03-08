#include "main.h"

/**
 *  _pow_recursion - returns the value of x raised to the power of y.
 *  @x: The value to be multiplied
 *  @y: The times to multipy the value
 *  Return: x
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}


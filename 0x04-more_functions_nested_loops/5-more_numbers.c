#include "main.h"

/**
 * more_numbers - Print 10 times and numbers since 0 up to 24
 *
 * Return: 10 times of the numbers since 0 up to 14
 */

int more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
		_putchar((y / 10) + '0');
	}
		_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}

#include "main.h"

/**
 * _isupper - Checks if a letter is upper
 * @x: The number to be checked
 * Return: ! for upper lettr or 0 for any else
 */

int _isupper(int x)
{

	if (x >= 65 && x <= 98)
	{
		return (1);
	}
	return (0);
}

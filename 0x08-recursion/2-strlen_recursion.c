#include "main.h"

/**
 *  _strlen_recursion - Prints a string in reverse
 *  @s: The string to be reversed
 *  Return: An integer value
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	return (0);

	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}


}

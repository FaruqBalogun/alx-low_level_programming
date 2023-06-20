#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 *
 * @s: The length of a string
 *
 * Return: The @s of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}


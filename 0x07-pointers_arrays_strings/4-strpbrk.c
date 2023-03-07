#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: The string to be searched
 * @accept: Input
 * Return: Always 0  (Success)
 */

char *_strpbrk(char *s, char *accept)

{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}

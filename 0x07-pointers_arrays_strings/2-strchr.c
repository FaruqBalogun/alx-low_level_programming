#include "main.h"

/**
 * _strchr - locates characters in a string
 * @s: The string
 * @c: The character to be located in a string
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)

{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

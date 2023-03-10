#include "main.h"

/**
 * _memset - fill the block of memory with a specific number
 * @s: Starting address of memory to be filled
 * @b: The desired value
 * @n: Number of bytes to changed
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

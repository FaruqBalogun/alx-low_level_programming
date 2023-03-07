#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: Memory destination
 * @src: Memory source
 * @n: Number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

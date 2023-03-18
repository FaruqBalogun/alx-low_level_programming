#include "main.h"

/**
 * _calloc - Allocates memery for an array
 * @nmemb: Allocate memory for array
 * @size: the size of the memory to print
 *
 * Return: Pointer to allocated array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		s[b] = 0;
	return (s);
}

#include <stdio.h>
#include "main.h"

/**
 * *_realloc - reallocates a memoer block using malloc and funcion free
 * @ptr: Pointer to memory previously allocated by malloc
 * @old_size: size of allocated memory for ptr
 * @new_size: New size of the new memeory block
 * Return: Pointer to the new allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *oldp = ptr;
	unsigned int i, n = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}

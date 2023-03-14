#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * create_array - prints a function that creates an array of chars,
  * and initializes it with a specific char.
  * @c: The charcter to be printed
  * @size: Size of the character
  * Return: Always s
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

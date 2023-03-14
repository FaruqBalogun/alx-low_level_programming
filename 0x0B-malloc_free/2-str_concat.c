#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - Function used to print two string
  * @s1: String 1
  * @s2: The sting to be copied to s1
  * Return: s
  */

char *str_concat(char *s1, char *s2)
{
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;

	char *s = malloc(size * sizeof(char));

	for (int i = 0; i < s1_length; i++)
	s[i] = s1[i];

	for (int j = 0; j < s2_length; j++)
	s[s1_length + i] = s2[j];

	if
	(s[size - 1] == '\0');

	else
	{
		return (NULL);
	}

	return (s);
}

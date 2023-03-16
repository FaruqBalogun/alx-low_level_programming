#include <stdlib.h>
#include "main.h"

/**
  * argstostr - function that concatenates all the arguments of your program
  * @ac: The number count of argument
  * @av: Pointer to the charcter array
  * Return: a pointer to a new string, or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int len = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}

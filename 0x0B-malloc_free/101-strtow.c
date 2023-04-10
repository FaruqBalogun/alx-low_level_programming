#include <stdlib.h>
#include "holberton"

/**
 * count_word - a function that counts the number words in a string.
 * @s: string
 *
 * Return: Number of words
 */

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0' c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag ==0)
		{
			flag = 1;
			w++;
		}
	}
	return (w); 
}

/**
 * **strow - Splits a string into two
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (success)
 * or NULL (Error)
 */
char **strow(char *str)
{
	
}

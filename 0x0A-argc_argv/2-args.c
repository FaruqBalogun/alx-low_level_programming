#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of argument passed into the program
 * @argc: Prints number count count of argument
 * @argv: Prints the Array of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

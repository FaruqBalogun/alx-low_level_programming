#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of argument passed to the program
 * @argc: Number of arguments count
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}

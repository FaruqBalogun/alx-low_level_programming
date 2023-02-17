#include <stdio.h>
/**
 * main - prints the alphabet in lower and uppercase
 * Return: Always 0
 */
int main(void)
{
	char luca;

	for (luca = 'a'; luca <= 'z'; luca++)
	{
		putchar (luca);
	}
	for (luca = 'A'; luca <= 'Z'; luca++)
	{
		putchar (luca);
	}
	putchar ('\n');
	return (0);
}

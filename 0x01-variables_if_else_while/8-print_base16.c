#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i;
	char hv[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hv[i]);
	}
	putchar('\n');
	return (0);
}

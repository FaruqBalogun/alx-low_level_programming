#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		putchar('0' + i / 10);
		putchar('0' + i % 10);
		putchar(' ');
	}
	for (j = i + 1; j <= 99; j++)
	{
		putchar('0' + j / 10);
		putchar('0' + j % 10);

	}

	if (i == 98 && j == 99)
	{
		continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints number base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{

	int num;
	int lc;

	for (num = 0; num <= 10; num++)
		putchar((num % 10) + '0');

	for (lc = 'a' lc <= 'f'; lc++)
		putchar(lc);

	putchar('\n');

	return (0);
}

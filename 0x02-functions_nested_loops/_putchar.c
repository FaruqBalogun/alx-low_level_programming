#include <unistd.h>
/**
 * _putchar - wrtes the character c to stdout
 * @c: The characters to print
 * Return: Always 1
 * on error,-1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

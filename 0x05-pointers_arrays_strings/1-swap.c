#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 *
 * @a: An integer input pointer
 * @b: An integer input pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

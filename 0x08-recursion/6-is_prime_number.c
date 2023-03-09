#include "main.h"

/**
 * is_prime_number - Prints the prime number of an integer
 * @n: The integer
 * Return: returns 1 if the input integer is a prime number
 * otherwise returns 0 if the number is not a prime number
 */
int is_prime_number(int n)
{
	int prime = 0;

	if (n < 2)
		prime = 0;
	else if (n == 2)
		prime = 1;
	else if (n % 2 == 1)
		prime = 1;

	return (prime);
}

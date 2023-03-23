#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

 /**
  * op_sub - Returns the differnce of two numbers
  * @a: The first number
  * @b: The second number
  *
  * Return: The sub of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Returns the division of two numbers
* @a: The first number
* @b: The second number
*
* Return: The quotient of a and b
*/

int op_div(int a, int b)
{
	return (a / b);
}

 /**
 49 * op_mod - Returns the Modulus of two numbers
 50 * @a: The first number
 51 * @b: The second number
 52 *
 53 * Return: The remainder of a and b
 54 */

int op_mod(int a, int b)
{
	return (a % b);
}




#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of adding a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtracting b from a.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of multiplying a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of dividing a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the remainder of division between two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of dividing a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

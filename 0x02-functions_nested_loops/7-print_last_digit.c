#include "main.h"

/**
 * print_last_digit - calculates the last digit of n
 * @n: integer type number
 * @lastDigit: The last number of @n
 * Return: Always returns @lastDigit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n / 10);
		return (lastDigit);
	}
	else
	{
		lastDigit = n % 10;
		return (lastDigit);
	}
}

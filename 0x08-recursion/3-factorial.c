#include "main.h"

/**
 * factorial- the function that prints factorial of a number.
 * @n: the factorial number
 *
 * Return: the factor of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

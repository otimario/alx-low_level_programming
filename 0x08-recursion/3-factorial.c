#include "main.h"

/**
 * factorial - will calculate the factorial of the gibven number
 * @n: An input to calculate factorial
 *
 * Return: interger
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

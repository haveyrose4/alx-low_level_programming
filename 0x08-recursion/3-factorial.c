#include "main.h"

/**
 * factorial - function that returns the factorial of n
 * @n: the integer
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

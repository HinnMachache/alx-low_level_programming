#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: Number parameter
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}

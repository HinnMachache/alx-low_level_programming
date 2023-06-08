#include "main.h"
/**
 * is_prime_number - checks for prime
 * @n: Number to be checked
 * Return: Returns the result
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n == 1)
		return (1);
	if (n % i == 0)
	{
		return (0);
	}
	i++;
	return (is_prime_number(n));
}

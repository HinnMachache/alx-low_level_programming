#include "main.h"
/**
 * _sqrt_recursion - finds the dquare root
 * @n: Paramter
 * Return: Return the results
 */

int _sqrt_recursion(int n)
{

	return (_sqrt_recursion(n - 1));
}

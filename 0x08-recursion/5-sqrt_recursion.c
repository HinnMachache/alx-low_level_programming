#include "main.h"
/**
 * _sqrt_recursion - returns squareRoot of a number
 * @n: Number parameter
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n - 1));
}

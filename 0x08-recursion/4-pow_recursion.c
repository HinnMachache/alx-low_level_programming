#include "main.h"
/**
 * _pow_recursion - raises a number to power
 * @x: Base number
 * @y: Index to be raised to
 * Return: Return the results
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}

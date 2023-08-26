#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for a digit
 * @c: Parameter to be passed
 * Return: Return 1 r 0
 */

int _isdigit(int c)
{
	if (isdigit(c) == 0)
		return (0);
	else
		return (1);
}

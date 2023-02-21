#include "main.h"
/**
 * _islower - checks for lower case characters
 * @c: character to be checked
 * return: return value
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

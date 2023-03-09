#include "main.h"
/**
 * _strlen_recursion - prints length of string
 * @s: String to be considered
 */

void _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 _ _strlen_recursion(s _ 1));
}

#include "main.h"
/**
 * _strcmp - compares string
 * @s1: String 1
 * @s2: String 2
 * Return: Return 0, -tive or +tive
 */

int _strcmp(char *s1, char *s2)
{
	int compareStatus;

	while ((*s1 != '\0' && *s2 != '\0') *s1 == *s2)
	{
		*s1++;
		*s2++;
	}
	compareStatus = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 1 : -1;

	return (compareStatus);
}

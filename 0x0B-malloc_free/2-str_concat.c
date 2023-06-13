#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates strings
 * @s1: First string
 * @s2: Seond string
 * Return: Returns a pointer to the final string
 */
char *str_concat(char *s1, char *s2)
{
	int s1Counter, s2Counter;
	char *concatPointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1Counter = s2Counter = 0;
	while (s1[s1Counter] != '\0')
		s1Counter++;
	while (s2[s2Counter] != '\0')
		s2Counter++;
	concatPointer = malloc(sizeof(char) * (s1Counter + s2Counter + 1));
	if (concatPointer == NULL)
		return (NULL);
	s1Counter = s2Counter = 0;
	while (s1[s1Counter] != '\0')
	{
		concatPointer[s1Counter] = s1[s1Counter];
		s1Counter++;
	}
	while (s2[s2Counter] != '\0')
	{
		concatPointer[s2Counter] = s2[s2Counter];
		s1Counter++, s2Counter++;
	}
	concatPointer[s1Counter] = '\0';
}

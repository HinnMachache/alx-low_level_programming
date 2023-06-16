#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates to strings
 * @s1: Destination string
 * @s2: Source string
 * @n: number of bytes to concatenate
 * Return: Pointer to final string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatPointer;
	unsigned int s1Length = 0, s2Length = 0, s1Counter = 0, s2Counter = 0,
		     counter;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[s1Length])
		s1Length++;
	while (s2 && s2[s2Length])
		s2Length++;
	if (n < s2Length)
		concatPointer = malloc(sizeof(char) + (s1Length + n + 1));
	else
		concatPointer = malloc(sizeof(char) + (s1length + s2length + 1));
	if (concatPointer == NULL)
		return (NULL);
	while (s1Counter < s1Length)
	{
		concatPointer[s1Counter] = s1[s1Counter];
		s1Counter++;
	}
	while (n < s2Length && s2Counter < (s1Length + n))
	{
		concatPointer[s1Counter++] = s2[s2Counter++];
	}
	while (n >= s2Length && s1Counter < (s1Length + s2Length))
	{
		concatPointer[s1Counter] = s2[s2Counter];
	}
	concatPointer[s1Counter] = '\0';
	return (concatPointer);
}

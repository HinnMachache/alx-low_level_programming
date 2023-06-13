#include "main.h"
#include <stdlib.h>
/**
 * _strdup- Duplicates a string
 * @str: Source string to ve duplicated
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int lengthCopy, length = 0;
	char *strPointer;

	if (str == NULL)
		return (NULL);
	while (*(str + length) != '\0')
		length++;
	strPointer = malloc(length + 1);
	if (strPointer == NULL)
		return (NULL);
	for (lengthCopy = 0; str[lengthCopy]; lengthCopy++)
		strPointer[lengthCopy] = str[lengthCopy];
	return (strPointer);
}

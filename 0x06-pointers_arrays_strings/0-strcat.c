#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: Return pointer to result string
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	for (i = 0; dest[i] != '\0'; i++) /* Getting to end of dest string*/
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++) /* Concatenate src to end of dest*/
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';

	return (dest);
}

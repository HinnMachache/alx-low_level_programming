#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Byte to be cnsidered
 * Return: Return Copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++) /* Copy the string*/
	{
		dest[i] = src[i];
	}
	for (; i < n; i++) /* Explicitly add the null character*/
	{
		dest[i] = '\0';
	}

	return (dest);
}

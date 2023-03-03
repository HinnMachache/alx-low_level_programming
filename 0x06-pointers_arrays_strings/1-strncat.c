#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * @n: no of bytes from src string
 * Return: Return dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i;

	for (i = 0; dest[i] != '\0'; i++) /*Get to end of dest string*/
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++) /* concatenate src to dest*/
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';

	return (dest);
}

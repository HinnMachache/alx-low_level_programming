#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (counter = 0; b[counter]; counter++)
	{
		if (b[counter] < '0' || b[counter] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[counter] - '0');
	}
	return (dec_val);
}

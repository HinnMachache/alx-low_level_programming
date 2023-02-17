#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '8'; digit++)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
	}
	digit = 9;
	putchar(digit);

	return (0);
}

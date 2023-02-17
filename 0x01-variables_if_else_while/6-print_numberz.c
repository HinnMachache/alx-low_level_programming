#include <stdio.h>
/**
 * main - Entry point
 * Return: Always o(success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
		{
			putchar('\n');
		}
	}

	return (0);
}

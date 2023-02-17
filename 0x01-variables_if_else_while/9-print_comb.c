#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(success)
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
			break;
		}
		putchar(',');
		putchar(' ');
	}

	return (0);
}

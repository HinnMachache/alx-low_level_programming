#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(success)
 */

int main(void)
{
	char alph;
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
		{
			for (alph = 'a'; alph <= 'f'; alph++)
			{
				putchar(alph);
			if (alph == 'f')
				putchar('\n');
			}
		}
	}

	return (0);
}

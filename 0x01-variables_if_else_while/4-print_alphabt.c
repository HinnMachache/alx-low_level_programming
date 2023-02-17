#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'e' || alph == 'q')
			continue;
		putchar(alph);
		if (alph == 'z')
		{
			putchar('\n');
		}
	}

	return (0);
}

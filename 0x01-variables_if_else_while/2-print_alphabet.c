#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0(success)
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		if (alph == 'z')
			putchar('\n');
		alph++;
	}

	return (0);
}

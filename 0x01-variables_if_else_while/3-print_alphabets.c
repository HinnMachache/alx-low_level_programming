#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0(success)
 */

int main(void)
{
	char alph = 'a';
	char ABET = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
			while (ABET <= 'Z')
			{
				putchar(ABET);
				ABET++;
				if (ABET == 'Z')
					putchar('\n');
			}
	}

	return (0);
}

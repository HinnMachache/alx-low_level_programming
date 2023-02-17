#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */

int main(void)
{
	char alph = 'z';

	for (; alph >= 'a'; alph--)
	{
		putchar(alph);
		if (alph == 'a')
			putchar('\n');
		alph--;
	}

	return (0);

}

#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */

int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
		if (alph == 'a')
			putchar('\n');
	}

	return (0);

}

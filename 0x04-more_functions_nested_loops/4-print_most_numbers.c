#include "main.h"
/**
 * print_most_numbers - print digits from 0 to 9, omitting 2 $ 4
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + '0');
		if (num == 9)
			_putchar('\n');
	}
}

#include "main.h"
/**
 * print_numbers - prints integers from 0 to 9
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
		if (num == 9)
			_putchar('\n');
	}
}

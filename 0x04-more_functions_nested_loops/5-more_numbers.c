#include "main.h"
/**
 *  more_numbers- prints alphabet 10 time.
 */
void more_numbers(void)
{
	char n;
	int m = 1;

	while (m <= 10)
	{
	for (n = '0'; n <= '14'; n++)
	{
		_putchar(n);
		if (n == '14')
			_putchar('\n');
	}
	m++;
	}
}

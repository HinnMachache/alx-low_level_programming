#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Sum of all integers
* @num: number of args
* @...: Other args
* Return: Sum of integers
*/

int sum_them_all(const unsigned int num, ...)
{
	unsigned int counter;
	int num_grab, sum = 0;

	if (num == 0)
		return (0);
	va_list num_arrays;

	va_start(num_arrays, num);
	for (counter = 0; counter < num; counter++)
	{
		num_grab = va_arg(num_arrays, int);
		sum += num_grab;
	}
	va_end(num_arrays);
	return (sum);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
* print_numbers - Print numbers
* @separator: Argument separator
* @n: Number og args
* @...: Extra args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	int num_grab;
	va_list num_args;

	va_start(num_args, n);
	for (counter = 0; counter < n; counter++)
	{
		num_grab = va_arg(num_args, int);
			printf("%d", num_grab);

		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(num_args);
	printf("\n");

}

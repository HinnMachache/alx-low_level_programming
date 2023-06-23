#include "variadic_functions.h"
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

	if (n == 0)
		return;
	va_list num_args;

	va_start(num_args, n);
	for (counter = 0; counter < n; counter++)
	{
		num_grab = va_arg(num_args, int);
		if (separator == NULL)
			printf("%d ", num_grab);
		else
			printf("%d%s ", num_grab, separator);
	}
	va_end(num_args);
	printf("\n");

}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
* print_strings - print strings
* @separator: String separator
* @n: Number of strings
* @...: Other args
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *string;
	va_list string_args;

	va_start(string_args, n);
	for (counter = 0; counter < n; counter++)
	{
		string = va_arg(string_args, char *);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(string_args);
	printf("\n");
}

#include "variadic_functions.h"
#include <stdarg.h>
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

	if (n == 0)
		return;

	va_start(string_args, n);
	for (counter = 0; counter < n; counter++)
	{
		string = va_arg(string_args, char *);
		if (string == NULL)
			string = "(nil)";
		if (separator == NULL)
			printf("%s ", string);
		else
			printf("%s%s ", string, separator);
	}
	va_end(string_args);
	printf("\n");
}

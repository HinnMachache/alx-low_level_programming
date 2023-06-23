#include "variadic_functions.h"
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

	if (n == 0)
		return;
	va_list string_args;

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

#include "variadic_functions.h"

/**
* print_strings - Prints strings.
* @n: Parameter.
* @separator: Separator.
* Return: Nothing.
*/



void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int j;
	va_list ap;



	va_start(ap, n);



	if (separator == NULL)
		separator = "";



	for (j = 0; j < n; j++)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

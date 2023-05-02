#include "variadic_functions.h"

/**
* print_numbers - Prints numbers.
* @n: Numbers.
* @separator: Separator
*
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, int));
		if (j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

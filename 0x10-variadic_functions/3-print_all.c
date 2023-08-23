#include "variadic_functions.h"

/**
* print_all - Prints all args.
* @format: Specifies the format.
*
* Return: Nothing.
*/

void print_all(const char * const format, ...)
{
	int j;
	int f;
	char *s;
	va_list a_list;

	va_start(a_list, format);
	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				f = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				f = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				f = 0;
				break;
			case 's':
				s = va_arg(a_list, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				f = 0;
				break;
			default:
				f = 1;
				break;
		}
		if (format[j + 1] != '\0' && f == 0)
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(a_list);
}

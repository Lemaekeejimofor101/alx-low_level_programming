#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - prints num
 * @separator: pointer param
 * @n: param
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int q;

	va_start(valist, n);

	for (q = 0; q < n; q++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && q < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
